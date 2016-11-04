#pragma once


class Vector2
{
public:
    float x;
    float y;

    static Vector2 up;
    static Vector2 down;
    static Vector2 left;
    static Vector2 right;

    Vector2();
    Vector(float x, float y);

    float Magnitude();
    float DotProduct();

    void Normalize();
    Vector2 GetNormalized();

    // operators: +, -, *, /
    /*
        Info: in next version Vector2 have to be compatibille with sfml & box2d
        vectors
    */
};
