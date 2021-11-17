#pragma once
#include<iostream>
#include "Point.h"
using namespace std;
class Cercle
{
private:
	double rayon;
	Point center;
public:
	Cercle();
	Cercle(double r, double x, double y);
	void afficher();
	double surface();
	double perimetre();
	bool egalite(Cercle cerclee);
	bool verification(Point x);

};

