#include "stdafx.h"
#include <iostream>
#include <cmath>
#include "Point2d.h"

// Constructor
Point2d::Point2d(double x, double y) : m_x(x), m_y(y)	
{
}

// Calculate distance between two points
double Point2d::distanceTo(const Point2d p)
{			
	return sqrt((getX()-p.getX())*(getX()-p.getX()) + (getY()-p.getY())*(getY()-p.getY()));
}

// Friend function
double distanceFrom(Point2d q, Point2d p)
{
	return sqrt((q.getX()-p.getX())*(q.getX()-p.getX()) + (q.getY()-p.getY())*(q.getY()-p.getY()));
}

void Point2d::print()
{
	std::cout << "Point2d(" << getX() << ", " << getY() << ")\n";
}