//Assignment By Omri Weiss, 308248657
#include<iostream>
#include "Circle.h"
#include "Collection.h"
using namespace std;

#define GET_VARIABLE_NAME(Variable) (#Variable)

void main()
{
	/*
	Colors:
	1- Blue
	2- Red
	3-Green
	4-Yellow
	*/
	cout << "Construction" << endl;
	cout << "************************************************" << endl;			
	Collection g(4, 3, 2, 0);
	cout << "************************************************" << endl;

	cout << "-- before setColor(2) --" << endl;
	g.print();
	Point p(5, 1);
	g.getCircleAt(p).setColor(2);

	cout << "-- after setColor(2) --" << endl;
	g.print();
	

	cout << "************************************************" << endl;

	   	  
	system("pause");
	
	

}