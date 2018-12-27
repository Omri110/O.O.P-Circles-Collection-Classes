//Assignment By Omri Weiss, 308248657

#pragma once
#include<iostream>

using namespace std;

class Point
{

	
public:
	int x;
	int y;
	Point(int =0, int =0);
	

	int GetX() const { return x; }
	int GetY() const { return y; }

	void SetX(int);
	void SetY(int);

	void print() const;



	void SetPoint(int x, int y) { SetX(x); SetY(y); }
};

