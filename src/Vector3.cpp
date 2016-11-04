#include "Vector3.h"

Vector3::Vector3() :Vector2(), z(0)
{
}

Vector3::Vector3(float x, float y, float z) : Vector2(x, y), z(z)
{
}

Vector3::Vector3(Vector2 vec2, float z) : Vector2(vec2.x, vec2.y), z(z)
{
}

float Vector3::Magnitude()
{
	return (sqrt(x*x + y*y+z*z));
}

void Vector3::Normalize()
{
	float length = (sqrt(x*x + y*y+z*z));
	x /= length;
	y /= length;
	z /= length;
}

Vector3 Vector3::GetNormalized()
{
	Vector3 normalisedVector(x, y,z);
	normalisedVector.Normalize();
	return normalisedVector;
}

Vector3 Vector3::operator+(const Vector3 & second)
{
	return Vector3(x + second.x, y + second.y, z+second.z);
}

Vector3 Vector3::operator-(const Vector3 & second)
{
	return Vector3(x - second.x, y - second.y, z - second.z);
}

Vector3 Vector3::operator*(const Vector3 & second)
{
	return Vector3(x * second.x, y * second.y, z * second.z);
}

Vector3 Vector3::operator/(const Vector3 & second)
{
	return Vector3(x / second.x, y / second.y, z / second.z);
}
