#ifndef POINT2D_H
#define POINT2D_H

class Point2d
{
private:
	double m_x;
	double m_y;

public:
	Point2d(double x = 0.0, double y = 0.0);
	double distanceTo(Point2d point);
	friend double distanceFrom(Point2d p1, Point2d p2);
	void print();

	double getX() const {return m_x;}
	double getY() const {return m_y;}

};

#endif