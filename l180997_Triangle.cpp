#include "Triangle.h"

triangle :: triangle(float b,float h,string co)
{
	base=b;
	height=h;
	color=co;
	cout<<"base :"<<base<<endl;
	cout<<"height :"<<height<<endl;
	cout<<"color :"<<color<<endl;
   

}

float triangle :: area()
{
	float a=(base*height)/2;
	 cout<<"area of triangle with color "<<color<<" is :";
	return a;
}
triangle :: ~triangle()
{
	cout<<"~triangle() called"<<endl;
}