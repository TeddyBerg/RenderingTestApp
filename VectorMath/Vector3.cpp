#include "stdafx.h"
#include "Vector3.h"
#include "Vector2.h"

#pragma once

#pragma region Constructors

Vector3::Vector3(double x, double y, double z)
{
	x_ = x;
	y_ = y;
	z_ = z;
}

Vector3::Vector3(Vector2 v)
{
	x_ = v.x();
	y_ = v.y();
	z_ = 0;
}

#pragma endregion

double Vector3::x() const
{
	return 0.0;
}

double Vector3::y() const
{
	return 0.0;
}

double Vector3::z() const
{
	return 0.0;
}

void Vector3::x(double newX)
{
}

void Vector3::y(double newY)
{
}

void Vector3::z(double newZ)
{
}