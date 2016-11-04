#include "Vector2.h"

Vector2::Vector2()
{
}

Vector2::Vector2(float _x, float _y)
{
	x = _x;
	y = _y;
}

float Vector2::Magnitude()
{

}

void Vector2::Normalize()
{
	float length = (sqrt(x*x + y*y));
	x = x / length;
	y = y / length;
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