//Assignment By Omri Weiss, 308248657

#pragma once
#include "Point.h"
class Circle: public Point
{



public:
	Circle(int x, int y, int r, int color);
	Circle();
	

	virtual ~Circle();
	// Get the Circle's color
	int getColor();	
	// Set the circle's color
	void setColor(int);

	int getRadius();
	void setRadius(int r);


	bool contains(const Point &p) const;
	void print() const;

private:
	const Point center;
	int radius, color;

	/*
	Colors:
	1- Blue
	2- Red
	3-Green
	4-Yellow	
	*/

};

