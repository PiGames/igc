#pragma once
#include <string>
#include "IComponent.h"
#include "Vector3"

class Object
{
public:
    std::string name;
    std::string tag;

    Vector3 position;
    float rotation;

    IComponent* AddComponent<IComponent>(); // def do zmiany, z zewnątrz klasy
    IComponent* GetComponent<IComponent>(); // ma to wygladac tak:
    void RemoveComponent<IComponent>();     // obj.AddComponent<MyComponent>();
};
