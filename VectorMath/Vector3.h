#include "Vector2.h"

#pragma once

class Vector3 {
public:
#pragma region Constructors

	Vector3(double x = 0, double y = 0, double z = 0);
	Vector3(Vector2 v);


#pragma endregion

#pragma region Getters and Setters

	double x() const;
	double y() const;
	double z() const;
	void x(double newX);
	void y(double newY);
	void z(double newZ);

#pragma endregion

private:
	double x_;
	double y_;
	double z_;

};

