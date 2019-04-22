// Polymorphism.cpp : Defines the entry point for the console application.
//

#include "Shape.h"
#include "Triangle.h"
#include "Circle.h"
#include "Rectangle.h"
#include <conio.h>
float sumArea(shape *shape1,shape *shape2)
{
	float sum;
	sum=shape1->area()+shape2->area();
	cout<<"the sum is :"<<endl;
	return sum;
}

int main()
{
	cout<<"                                         Exercise 1                                 "<<endl;
	triangle t1(1.0,9.0, "Red");
	circle c1(2, "Blue");
	rectangle r1(6,2, "Orange");
	cout<<t1.area()<<endl;
	cout<<t1.color<<endl;
	cout<<c1.area()<<endl;
	cout<<r1.area()<<endl;
    cout<<"                                         Exercise 2                                 "<<endl;
	shape *sptr1= &t1;
	shape &sref=r1;
	cout<< sptr1->area()<<endl;
	cout<< sptr1->color<<endl;
	cout<< sref.color<<endl;
	cout<< sref.area()<<endl;
	cout<<"                                         Exercise 3a                                 "<<endl;
	shape s1("Purple");
	cout<<sumArea(&t1,&c1)<<endl;
	cout<<sumArea(&s1,&r1)<<endl;
	cout<<sumArea(&s1,&t1)<<endl;
	cout<<"                                         Exercise 3b                                 "<<endl;
	shape **shapesArray=new shape*[5];
	int count= 5;
	string c;
	for(int i=0; i<count;)
	{
  		cout << "Press 1 for a triangle, 2 for rectangle and 3 for a circle." << endl;
  		switch (_getch())
  		{
        	case '1':
				{	
				float b,h;
				cout<<"             For triangle:"<<endl;
				cout<<"enter base"<<endl;
				cin>>b;
				cout<<"enter height"<<endl;
				cin>>h;
				cout<<"enter color"<<endl;
				cin>>c;
				shapesArray[i]=new triangle(b,h,c);
				//get base from user as input
              	//get height from user as input
              	//get color from user as input
              	// create new triangle object and add to shapesArray[i]
				cout<<shapesArray[i]->area()<<endl;
                i++;
              	break;
				}
        	case '2':
              	{
				float l,w;
				cout<<"               For rectangle:"<<endl;
				cout<<"enter length"<<endl;
				cin>>l;
				cout<<"enter width"<<endl;
				cin>>w;
				cout<<"enter color"<<endl;
				cin>>c;
				//get length from user as input
              	//get width from user as input
              	//get color from user as input
              	// create new rectangle object and add to shapesArray[i]
				shapesArray[i]=new rectangle(l,w,c);
				cout<<shapesArray[i]->area()<<endl;
                i++;
              	break;
				}
 
        	case '3':
				{
					float r;
					cout<<"				For circle:"<<endl;
					cout<<"enter radius :";cin>>r;
					cout<<"enter color";cin>>c;
              	//get radius from user as input
              	// create new circle object and add to shapesArray[i]
					shapesArray[i]=new circle(r,c);
					cout<<shapesArray[i]->area()<<endl;
                    i++;
              		break;
				}
   	 	default:
              	cout<<"Invalid input. Enter again." <<endl<<endl;
              	break;
	}
}
//print area of all the shapes in shapeArray
//delete all object you have create using new.          	
	cout<<"                       Exercise 4"                                 <<endl;
	shape *s2= new triangle(1.0,9.0, "Red");// constructor of triangle invoked
	delete s2; //identify which destructor in invoked
	for(int i=0;i<5;i++)
	{
		delete shapesArray[i];
	}
	delete[] shapesArray;

	
	return 0;
}

