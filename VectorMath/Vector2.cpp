#include "stdafx.h"
#include "Vector2.h"
#include <math.h>
#include <algorithm>

#pragma region Constructors

Vector2::Vector2()
{
	x_ = 0;
	y_ = 0;
}

Vector2::Vector2(double x, double y)
{
	x_ = x;
	y_ = y;
}

#pragma endregion

#pragma region Getters and Setters

double Vector2::x() const
{
	return x_;
}

double Vector2::y() const
{
	return y_;
}

void Vector2::x(double newX)
{
	x_ = newX;
}

void Vector2::y(double newY)
{
	y_ = newY;
}

#pragma endregion

#pragma region Transforms

Vector2 Vector2::getNormalized() const
{
	return *this / normL2();
}

void Vector2::normalize()
{
	*this = getNormalized();
}

double Vector2::normL1() const
{
	return x_ + y_;
}

double Vector2::normL2() const
{
	// L2 norm = Euclidean norm = euclidean distance
	return std::sqrt(x_*x_ + y_*y_);
}

double Vector2::normInfinity() const
{
	return std::max(x_, y_);
}

#pragma endregion

#pragma region Arithmetic

Vector2 operator/(const Vector2 & lhs, const double rhs)
{
	return Vector2(lhs.x_ / rhs, lhs.y_ / rhs);
}

Vector2 operator*(const Vector2 & lhs, const double rhs)
{
	return Vector2();
}

#pragma endregion