#pragma once
#include "Vector3.h"

class Ray3 {
public:
	Ray3(Vector3 location, Vector3 direction);

	Vector3 location() const;
	Vector3 direction() const;

private:
	Vector3 location_;
	Vector3 direction_;
};