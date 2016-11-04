#pragma once

#include <cmath>

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
    Vector2(float x, float y);

    float Magnitude();

    void Normalize();
	Vector2 GetNormalized();

	Vector2 operator+(const Vector2& second);
	Vector2 operator-(const Vector2& second);
	Vector2 operator*(const Vector2& second);
	Vector2 operator/(const Vector2& second);


};
