//Assignment By Omri Weiss, 308248657

#pragma once
#include<iostream>

using namespace std;
#include "Point.h"
#include "Circle.h"



class Collection:public Circle
{

public:
	Collection(int radius, int width, int height, int color);
	~Collection();
	Circle& getCircleAt(const Point &p);
	void print() const;

private:
	int count;
	Circle **circles;
};

