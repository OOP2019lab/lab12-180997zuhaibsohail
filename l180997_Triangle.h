#pragma once
#include "Shape.h"

class triangle : public shape
{
private:
	float base;
	float height;
public:
	triangle(float b,float h,string co);
	float area();
	~triangle();


};