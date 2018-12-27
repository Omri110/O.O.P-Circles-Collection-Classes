//Assignment By Omri Weiss, 308248657


#include "Point.h"
#include "Circle.h"
#include "Collection.h"



Collection::Collection(int radius_get, int circles_in_width, int circles_in_height, int color_get): count(1)
{
	count = circles_in_width * circles_in_height;

	circles = new Circle*[count];

	int Curr_x = 0;
	int Curr_y = 0;
	for (int i = 0; i < count; i++)
	{
		circles[i] = new Circle(Curr_x, Curr_y, radius_get, color_get);
		//Inisiallize new Circle Before Setting it's arguments


		circles[i]->setRadius(radius_get);
		//All Circles have same Radius
		circles[i]->setColor(color_get);
		//All Circles have same Color

		Curr_x = Curr_x + radius_get;
		//X's move RIGHT for next Circle initiallize
		//But Y's here stay at 0
		//this creating a row of Circles, in principle

	}

	cout << "Collection Constructed" << endl;

	
}




Collection::~Collection()
{
}


Circle& Collection::getCircleAt(const Point &p)
{
	
	for (int i = 0; i < count; i++)
	{
		if (circles[i]->contains(p))
		{
			cout << "Point ";
			p.print();
			cout << " Found at Circle Number " << i << endl;

			return *circles[i];
			

		}

	}

	return *circles[0];
	//^ Handles the 'Not All Control paths return a value' Problem
}

void Collection::print() const
{
	cout << "Collection Print" << endl;
	cout << "-----------------------------------------" << endl << endl;

	for (int i = 0; i < count; i++)
	{
		
		cout << "Circle Number " << i+1 << endl<<endl;
		circles[i]->print();
		cout << "************************************************" << endl<<endl;

	}
}

