#include "MyPoint.h"
#include <cmath>


MyPoint::MyPoint()
{
	x = 0;
	y = 0;
}

MyPoint::MyPoint(double ptX, double ptY) 
{
	x = ptX;
	y = ptY;
}

double MyPoint::getX()
{
	return x;
}

double MyPoint::getY()
{
	return y;
}

double MyPoint::distance(MyPoint p2)
{
	return sqrt((x - p2.x)*(x - p2.x) + (y - p2.y)*(y - p2.y));
}

