using System;
using System.Collections.Generic;

public interface IVervice
{
    void Begin();
    void OnDependencyResolved(Type resolvedDependencyType);
    bool Resolved { get; }
    List<DependencyNode> Dependencies { get; }
}