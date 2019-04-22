#pragma once
#include "Shape.h"

class rectangle:public shape
{
private:
	float height;
	float width;
public:
	rectangle(float h,float w,string co);
	float area();
	~rectangle();

};