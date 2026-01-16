#ifndef VECTOR2_F
#define VECTOR2_F

class Vector2f
{
	float m_x,m_y;
public:
	Vector2f(float _x, float _y);

	float GetPositionX();
	float GetPositionY();
	
	void SetPositionX(float _x);
	void SetPositionY(float _y);

	Vector2f Normalize();
	float Magnitude();

	Vector2f operator+(const Vector2f& second);
	Vector2f operator-(const Vector2f& second);
	Vector2f operator*(float second);	
	Vector2f operator/(float second);
};

#endif
