#include "Vector2.h"

Vector2::Vector2() :x(0), y(0)
{
}

Vector2::Vector2(float x, float y) : x(x), y(y)
{
}

float Vector2::Magnitude()
{
	return (sqrt(x*x + y*y));
}

void Vector2::Normalize()
{
	float length = (sqrt(x*x + y*y));
	x /= length;
	y /= length;
}

Vector2 Vector2::GetNormalized()
{
	Vector2 normalisedVector(x, y);
	normalisedVector.Normalize();
	return normalisedVector;
}

Vector2 Vector2::operator+(const Vector2 & second)
{
	return Vector2(x+second.x,y+second.y);
}

Vector2 Vector2::operator-(const Vector2 & second)
{
	return Vector2(x - second.x, y - second.y);
}

Vector2 Vector2::operator*(const Vector2 & second)
{
	return Vector2(x * second.x, y * second.y);
}

Vector2 Vector2::operator/(const Vector2 & second)
{
	return Vector2(x / second.x, y / second.y);
}

Vector2 Vector2::operator+(const float & second)
{
	return Vector2(x + second,y + second);
}

Vector2 Vector2::operator-(const float & second)
{
	return Vector2(x - second, y - second);
}

Vector2 Vector2::operator*(const float & second)
{
	return Vector2(x * second, y * second);
}

Vector2 Vector2::operator/(const float & second)
{
	return Vector2(x / second, y / second);
}
