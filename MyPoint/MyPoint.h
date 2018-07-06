#pragma once

class MyPoint
{
public:
	MyPoint();
	MyPoint(double ptX, double ptY);
	double getX();
	double getY();
	double distance(MyPoint p2);

private:
	double x;
	double y;
};

