using System;
using System.Collections.Generic;

public class EventBus
{
    public EventBus()
    {
        Instance = this;
    }

    private Dictionary<Type, List<Delegate>> eventSubscribers = new Dictionary<Type, List<Delegate>>();
    private Dictionary<Type, List<Action>> parameterlessEventSubscribers = new Dictionary<Type, List<Action>>();

    public static EventBus Instance;
    
    public void Subscribe<T>(Action<T> eventHandler) where T : EventArgs
    {
        Type eventType = typeof(T);
        if (eventType == typeof(EventArgs))
        {
            throw new ArgumentException("Cannot subscribe to parameterless event using Subscribe<T> method. Use Subscribe(Type, Action) method instead.");
        }

        if (!eventSubscribers.ContainsKey(eventType))
        {
            eventSubscribers[eventType] = new List<Delegate>();
        }

        eventSubscribers[eventType].Add(eventHandler);
    }

    public void Subscribe(Type eventType, Action eventHandler)
    {
        if (!parameterlessEventSubscribers.ContainsKey(eventType))
        {
            parameterlessEventSubscribers[eventType] = new List<Action>();
        }

        // Create a wrapper method that discards the parameter and calls the event handler with no parameters
        Action wrapperEventHandler = () => { eventHandler.Invoke(); };

        parameterlessEventSubscribers[eventType].Add(wrapperEventHandler);
    }

    public void Unsubscribe<T>(Action<T> eventHandler) where T : EventArgs
    {
        Type eventType = typeof(T);
        if (eventSubscribers.ContainsKey(eventType))
        {
            eventSubscribers[eventType].Remove(eventHandler);
        }
    }

    public void Unsubscribe(Type eventType, Action eventHandler)
    {
        if (parameterlessEventSubscribers.ContainsKey(eventType))
        {
            // Find the wrapper method that calls the event handler with no parameters and remove it
            Action wrapperEventHandler = () => { eventHandler.Invoke(); };
            parameterlessEventSubscribers[eventType].Remove(wrapperEventHandler);
        }
    }

    public void Publish<T>(T eventArgs) where T : EventArgs
    {
        Type eventType = typeof(T);
        if (eventType == typeof(EventArgs))
        {
            throw new ArgumentException("Cannot publish parameterless event using Publish<T> method. Use Publish(Type) method instead.");
        }

        if (eventSubscribers.ContainsKey(eventType))
        {
            foreach (Action<T> eventHandler in eventSubscribers[eventType])
            {
                eventHandler.Invoke(eventArgs);
            }
        }
    }

    public void Publish(Type eventType)
    {
        if (parameterlessEventSubscribers.ContainsKey(eventType))
        {
            foreach (Action eventHandler in parameterlessEventSubscribers[eventType])
            {
                eventHandler.Invoke();
            }
        }
    }
}