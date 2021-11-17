#include "Cercle.h"
#include "Point.h"
#include <math.h>
using namespace std;
Cercle::Cercle()
{
    this->rayon =0;
}

Cercle::Cercle(double r, double x, double y)
{
    this->rayon = r;
}

void Cercle::afficher()
{
    cout << "le rayon  :" << rayon << endl;
}

double Cercle::surface()
{
    return rayon*rayon*3.16;
}

double Cercle::perimetre()
{
    return 3.16 * 2 * rayon;
}

bool Cercle::egalite(Cercle cerclee)
{
    if (this->rayon == cerclee.r)
        return true;
    else 
    return false;
}

bool Cercle::verification(Point x)
{
    return false;
}
