//Assignment By Omri Weiss, 308248657

#include "Point.h"
#include<iostream>

using namespace std;

Point::Point(int xx, int yy) 
{
	x = xx;
	y = yy;	
	cout << "Point Constructed" << endl;
}


void Point::SetX(int xx) { x = xx; }
void Point::SetY(int yy) { y = y; }

void Point::print() const
{
	cout << "(" << x << "," << y << ")" << endl;
}
