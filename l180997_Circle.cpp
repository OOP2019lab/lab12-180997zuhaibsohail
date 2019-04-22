#include "Circle.h"

circle :: circle(float ra,string co)
{
	radius=ra;
	color=co;
	float area=3.14*ra*ra;
	cout<<"radius : "<<ra<<endl;
	cout<<"color : "<<co<<endl;
}
float circle :: area()
{
	float area;
	area=3.14*radius*radius;
	cout<<"area of circle with color "<<color<<" is : ";
	return area;

}
circle :: ~circle()
{
	cout<<"~circle() called"<<endl;
}