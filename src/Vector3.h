#pragma once
#include "Vector2.h"

class Vector3 : public Vector2
{
public:
    float z;

    Vector3();
    Vector3(float x, float y, float z);
    Vector3(Vector2, float z = 0.0f);

	float Magnitude();

	void Normalize();

	Vector3 GetNormalized();

	Vector3 operator+(const Vector3& second);
	Vector3 operator-(const Vector3& second);
	Vector3 operator*(const Vector3& second);
	Vector3 operator/(const Vector3& second);

	Vector3 operator+(const float& second);
	Vector3 operator-(const float& second);
	Vector3 operator*(const float& second);
	Vector3 operator/(const float& second);
};
