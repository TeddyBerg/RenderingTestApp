#pragma once
#include <vector>
#include "Vector3.h"
#include "Ray3.h"

class Geometry {
public:
	virtual bool intersects(Ray3 ray) = 0;

private:
	


};