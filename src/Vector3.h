#pragma once
#include "Vector2.h"

class Vector3 : public Vector2
{
public:
    float z;

    Vector3();
    Vector3(float x, float y, float z);
    Vector3(Vector2, float z = 0.0f);

    // todo like in Vector2
};
