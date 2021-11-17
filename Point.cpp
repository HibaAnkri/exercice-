#include "Point.h"
#include<iostream>
using namespace std;
Point::Point()
{
	this->x = 0;
	this->y = 0;
}
Point::Point(double x, double y) {
	this->x = x;
	this->y = y;
}
void Point::afficher()
{
	cout << "(" << x << "," << y << ")" << endl;
}