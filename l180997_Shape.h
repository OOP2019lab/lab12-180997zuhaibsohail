#pragma once
#include <iostream>
#include <string>
using namespace std;


class shape
{
private:
	float length;
protected:
	string type;
public:
	string color;
	shape();
	shape(string co);
	shape(float le,string ty,string co);
	virtual float area();
	virtual ~shape();
};