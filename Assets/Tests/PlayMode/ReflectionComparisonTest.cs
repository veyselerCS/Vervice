using System;
using System.Reflection;
using System.Reflection.Emit;
using NUnit.Framework;
using Unity.PerformanceTesting;

public class ReflectionComparisonTest
{
    //Test environment
    private int _warmupCount = 5;
    private int _measurementCount = 10;
    private int _iterationCount = 100000;
    
    //cached params
    private FieldInfo _fieldInfo;
    private MethodInfo _methodInfo;
    private ValueHolder _valueHolder;
    private Action<ValueHolder, int> _delegate;
    private Type _type;
    private object[] _parameters;
    private int _startingValue = 1;
    private int _newValue = 2;
    private string _fieldName = "Value";

    [OneTimeSetUp]
    public void Setup()
    {
        _valueHolder = new ValueHolder();
        _type = _valueHolder.GetType();
        _fieldInfo = _type.GetField(_fieldName);
        _methodInfo = _type.GetMethod("SetValue");
        _parameters = new object[] { _newValue };
    }

    [Test, Performance]
    public void DirectAssignmentTest()
    {
        _valueHolder.Value = _startingValue;

        Measure.Method(SetWithDirectAssignment)
            .WarmupCount(_warmupCount)
            .MeasurementCount(_measurementCount)
            .IterationsPerMeasurement(_iterationCount)
            .Run();

        Assert.AreEqual(_newValue, _valueHolder.Value);
    }
    
    [Test, Performance]
    public void FieldInfoTest()
    {
        _valueHolder.Value = _startingValue;

        Measure.Method(SetWithFieldInfo)
            .WarmupCount(_warmupCount)
            .MeasurementCount(_measurementCount)
            .IterationsPerMeasurement(_iterationCount)
            .Run();

        Assert.AreEqual(_newValue, _valueHolder.Value);
    }

    [Test, Performance]
    public void MethodInfoTest()
    {
        _valueHolder.Value = _startingValue;

        Measure.Method(SetWithMethodInfo)
            .WarmupCount(_warmupCount)
            .MeasurementCount(_measurementCount)
            .IterationsPerMeasurement(_iterationCount)
            .Run();

        Assert.AreEqual(_newValue, _valueHolder.Value);
    }

    [Test, Performance]
    public void SetFieldTest()
    {
        _valueHolder.Value = _startingValue;

        Measure.Method(SetWithSetFieldFlag)
            .WarmupCount(_warmupCount)
            .MeasurementCount(_measurementCount)
            .IterationsPerMeasurement(_iterationCount)
            .Run();

        Assert.AreEqual(_newValue, _valueHolder.Value);
    }

    [Test, Performance]
    public void DelegateTest()
    {
        _delegate = CreateSetter<ValueHolder, int>(_fieldInfo);
        _valueHolder.Value = _startingValue;

        Measure.Method(SetWithDelegate)
            .WarmupCount(_warmupCount)
            .MeasurementCount(_measurementCount)
            .IterationsPerMeasurement(_iterationCount)
            .Run();

        Assert.AreEqual(_newValue, _valueHolder.Value);
    }
    
    private void SetWithDirectAssignment()
    {
        _valueHolder.Value = _newValue;
    }
    
    private void SetWithFieldInfo()
    {
        _fieldInfo.SetValue(_valueHolder, _newValue);
    }
    
    private void SetWithMethodInfo()
    {
        _methodInfo.Invoke(_valueHolder, _parameters);
    }

    private void SetWithSetFieldFlag()
    {
        _type.InvokeMember(_fieldName, BindingFlags.SetField, null, _valueHolder, _parameters);
    }
    
    private void SetWithDelegate()
    {
        _delegate(_valueHolder, _newValue);
    }
    
    private Action<S, T> CreateSetter<S,T>(FieldInfo field)
    {
        string methodName = field.ReflectedType.FullName + ".set_" + field.Name;
        DynamicMethod setterMethod = new DynamicMethod(methodName, null, new Type[]{typeof(S),typeof(T)},true);
        ILGenerator gen = setterMethod.GetILGenerator();
        
        gen.Emit(OpCodes.Ldarg_0);
        gen.Emit(OpCodes.Ldarg_1);
        gen.Emit(OpCodes.Stfld, field);
        gen.Emit(OpCodes.Ret);
        
        return (Action<S, T>)setterMethod.CreateDelegate(typeof(Action<S, T>));
    }
}

public class ValueHolder
{
    public int Value = 1;

    public void SetValue(int value)
    {
        Value = value;
    }
}