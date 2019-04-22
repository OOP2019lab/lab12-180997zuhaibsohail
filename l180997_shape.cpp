#include "shape.h"

shape ::shape()
{
	length=0.0;

}
shape :: shape(float le,string ty,string co)
{
	length=le;
	type=ty;
	co=color;
	cout<<"length is:"<<length<<endl;
	cout<<"type is:"<<type<<endl;
	cout<<"color is:"<<color<<endl;
	
}
shape :: shape(string co)
{
	this->color=co;
	this->type="";

}
float shape :: area()
{
	//float ar=length*length;
	cout<<"area of shape "<<type<<"with color "<<color<<" is: ";
	return 0.0;
}
shape :: ~shape()
{
	cout<<"~shape() called"<<endl;


}