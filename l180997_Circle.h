#pragma once
#include "Shape.h"

class circle : public shape
{
private:
	float radius;
public:
	circle(float ra,string co);
	float area();
	~circle();

};