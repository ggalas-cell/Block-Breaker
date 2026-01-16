#include <cmath>
#include "Vector2f.h"

Vector2f::Vector2f(float _x, float _y) : m_x(_x),m_y(_y) {}

float Vector2f::GetPositionX() { return m_x; }
float Vector2f::GetPositionY() { return m_y; }

void Vector2f::SetPositionX(float _x) { m_x = _x; }
void Vector2f::SetPositionY(float _y) { m_y = _y; }

Vector2f Vector2f::Normalize()
{
	float d = Magnitude();
	if (d == 0)
		return Vector2f(0, 0);
	float x = m_x / d;
	float y = m_y / d;

	return Vector2f(x, y);
}

float Vector2f::Magnitude()
{
	return std::sqrt(std::pow(m_x, 2) + std::pow(m_y, 2));
}


Vector2f Vector2f::operator+(const Vector2f& second)
{
	return Vector2f	(m_x + second.m_x, m_y + second.m_y);
}

Vector2f Vector2f::operator-(const Vector2f& second)
{
	return Vector2f(m_x - second.m_x, m_y - second.m_y);
}

Vector2f Vector2f::operator*(float second)
{
	return Vector2f(m_x * second, m_y * second);
}

Vector2f Vector2f::operator/(float second)
{
	return Vector2f(m_x / second, m_y / second);
}