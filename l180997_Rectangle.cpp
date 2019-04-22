#include "Rectangle.h"


rectangle :: rectangle(float h,float w,string co)
{
	height=h;
	width=w;
	color=co;
	cout<<"height :"<<height<<endl;
	cout<<"width :"<<width<<endl;
	cout<<"color :"<<color<<endl;
	
}

float rectangle:: area()
{
	float ar=width*height;
	cout<<"area of rectangle with color "<<color<<" is : ";
	return ar;
}
rectangle :: ~rectangle()
{
	cout<<"~rectangle() called"<<endl;
}