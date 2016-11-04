#pragma once

class IComponent
{
public:
    virtual void Awake() = 0;
    virtual void OnDestroy() = 0;

    virtual void Update() = 0;
    virtual void FixedUpdate() = 0;

protected:
    void process_events();
};
