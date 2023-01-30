using System.Collections.Generic;
using UnityEditor.Build;
using UnityEditor.Build.Reporting;
using UnityEngine;
using Mono.Cecil;
using Mono.Cecil.Cil;

public class CecilTest : MonoBehaviour, IPostprocessBuildWithReport
{
    public void OnPostprocessBuild(BuildReport report)
    {
        Debug.LogWarning("I am a post build callback!");
    }

    [UnityEditor.Callbacks.DidReloadScripts]
    public static void OnScriptsReloaded()
    {
        var assemblies = UnityEditor.Compilation.CompilationPipeline.GetAssemblies();
        foreach (var assembly in assemblies)
        {
            if (assembly.name == "Scripts")
            {
                var readerParameters = new ReaderParameters { ReadSymbols = true };
                ModuleDefinition moduleDef = ModuleDefinition.ReadModule(assembly.outputPath, readerParameters);
                
                bool changed = false;
                foreach (var type in moduleDef.Types)
                {
                    if (type.BaseType != null && type.BaseType.Name == "VonoBehaviour`1")
                    {
                        foreach (var field in type.Fields)
                        {
                            if (field.HasCustomAttributes)
                            {
                                foreach (var attribute in field.CustomAttributes)
                                {
                                    if (attribute.AttributeType.Name == "Inject")
                                    {
                                        var setter = new MethodDefinition("set_" + field.Name, MethodAttributes.Public, moduleDef.TypeSystem.Void);
                                        setter.Parameters.Add(new ParameterDefinition(field.Name, ParameterAttributes.None, moduleDef.ImportReference(typeof(object))));
                                        setter.Body.Instructions.Add(Instruction.Create(OpCodes.Ldarg_0));
                                        setter.Body.Instructions.Add(Instruction.Create(OpCodes.Ldarg_1));
                                        setter.Body.Instructions.Add(Instruction.Create(OpCodes.Castclass, field.FieldType));
                                        setter.Body.Instructions.Add(Instruction.Create(OpCodes.Stfld, field));
                                        setter.Body.Instructions.Add(Instruction.Create(OpCodes.Ret));
                                        if (!type.Methods.Contains(setter))
                                        {
                                            Debug.LogWarning("Injected setter: " + setter.Name + " in type: " + type.Name + ")");
                                            type.Methods.Add(setter);
                                            changed = true;
                                        }
                                        
                                        var staticMethod = new MethodDefinition("Inject" + field.Name, MethodAttributes.Public | MethodAttributes.Static, moduleDef.TypeSystem.Void);
                                        staticMethod.Parameters.Add(new ParameterDefinition("instance", ParameterAttributes.None,moduleDef.ImportReference(typeof(object))));
                                        staticMethod.Parameters.Add(new ParameterDefinition("service", ParameterAttributes.None,moduleDef.ImportReference(typeof(object))));

                                        staticMethod.Body.Instructions.Add(Instruction.Create(OpCodes.Ldarg_0));
                                        staticMethod.Body.Instructions.Add(Instruction.Create(OpCodes.Ldarg_1));
                                        staticMethod.Body.Instructions.Add(Instruction.Create(OpCodes.Call, setter));
                                        staticMethod.Body.Instructions.Add(Instruction.Create(OpCodes.Ret));

                                        if (!type.Methods.Contains(staticMethod))
                                        {
                                            Debug.LogWarning("Injected static method: " + staticMethod.Name + " in type: " + type.Name + ")");
                                            type.Methods.Add(staticMethod);
                                            changed = true;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                
                if (changed)
                {
                    var writerParameters = new WriterParameters { WriteSymbols = true };
                    moduleDef.Write(assembly.outputPath, writerParameters);
                }
            }
        }
    }

    public int callbackOrder { get; }
}