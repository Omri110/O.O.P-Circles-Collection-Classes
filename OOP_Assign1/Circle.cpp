//Assignment By Omri Weiss, 308248657

#include "Circle.h"
#include "Point.h"


Circle::Circle(int xx, int yy, int rr, int getColor) : radius(4), color(2), center(xx,yy)
{

	//center.SetPoint(xx, yy);
	radius = rr;
	color = getColor;
	cout << "Circle Constructed" << endl;

}

Circle::Circle() { cout << "Circle Constructed" << endl; }


Circle::~Circle()
{
}


// Get the Circle's color
int Circle::getColor()
{	
	return color;
}

int Circle::getRadius()
{
	return radius;

}

// Set the circle's color
void Circle::setColor(int get_color)
{
	color = get_color;

}

void Circle::setRadius(int get_radius)
{
	radius = get_radius;

}




bool Circle::contains(const Point &p) const 

{

	if ((this->center.GetX() - radius <= p.GetX()) && (p.GetX() <= this->center.GetX() + radius) &&
		(this->center.GetY() - radius <= p.GetY()) && (p.GetY() <= this->center.GetY() + radius)
		)
		return true;
	else
		return false;


};
void Circle::print() const 

{
	cout << "Center of Circle: ";
	this->center.print();
	cout << endl;

	cout << "Radius of Circle: " << radius << endl;

	cout << "Color of Circle: " << color << endl;
	


};
