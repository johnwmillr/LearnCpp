// 08-00_Classes.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <stdint.h>
#include "Date.h"
#include "Point2d.h"

// ---------------------------------------------------------
class Employee
{
public:
	std::string m_name;
	int m_id;
	double m_wage;

	// Print employee information to the screen
	void print()
	{
		std::cout << "Name: " << m_name << " ID: " << m_id << " Wage: $" << m_wage << '\n';
	}
};

// ---------------------------------------------------------
class Point3d
{
	double m_x;
	double m_y;
	double m_z;

public:
	void setValues(double x, double y, double z)
	{
		m_x = x;
		m_y = y;
		m_z = z;
	}

	void print()
	{
		std::cout << "<" << m_x << ", " << m_y << ", " << m_z << ">\n";
	}

	bool isEqual(Point3d &point)
	{
		return (m_x == point.m_x && m_y == point.m_y && m_z == point.m_z);
	}
};

// ---------------------------------------------------------
class Ball
{
private:
	const std::string m_color;
	double m_radius;

public:
	Ball(const std::string &color = "black", double radius = 10.0)
		: m_color(color), m_radius(radius) // member initializer list
	{
	}

	void print()
	{
		std::cout << "Color: " << m_color << ", Radius: " << m_radius << '\n';
	}
};

// ---------------------------------------------------------
class Something
{
private:
	int m_value1;
	double m_value2;
	char m_value3;
	float m_value4;

public:
	Something(int value1, double value2, char value3='c', float value4=34.6)
		: m_value1(value1), m_value2(value2), m_value3(value3), m_value4(value4)
	{
	}
};

// ---------------------------------------------------------
class RGBA
{
private:
	int m_red;
	int m_blue;
	int m_green;
	int m_alpha;

public:
	RGBA(int red=0, int blue=0, int green=0, int alpha=255)
		: m_red(red), m_blue(blue), m_green(green), m_alpha(alpha)
	{
	}

	void print()
	{
		std::cout << "r=" << m_red << " b=" << m_blue << " g=" << m_green << " a=" << m_alpha << '\n';
	}
};

int main()
{		
	// ---------------------------------------------------------
	// Date Class
	Date today(2017, 1, 13);
	today.Print();

	// ---------------------------------------------------------
	// Employees
	Employee alex = {"Alex", 1, 25.00};
	Employee emily = {"Emily", 2, 22.25};

	// Print out the employee information
	alex.print();
	emily.print();

	// ---------------------------------------------------------
	// 3D point class
	Point3d point1;
	point1.setValues(1.0, 2.0, 3.0);

	Point3d point2;
	point2.setValues(1.0, 2.0, 3.0);

	if (point1.isEqual(point2))
		std::cout << "point1 and point2 are equal\n";
	else
		std::cout << "point1 and point2 are not equal\n";

	Point3d point3;
	point3.setValues(3.0, 4.0, 5.0);

	if (point1.isEqual(point3))
		std::cout << "point1 and point3 are equal\n";
	else
		std::cout << "point1 and point3 are not equal\n";

	// ---------------------------------------------------------
	// Ball quiz
	Ball def;
	def.print();

	Ball blue("blue");
	blue.print();

	Ball blueTwenty("blue", 20.0);
	blueTwenty.print();

	// ---------------------------------------------------------
	// RGB class quiz
	RGBA teal(0, 127, 127);
	teal.print();

	// ---------------------------------------------------------
	// 2D Point Class quiz
	std::cout << '\n';
	Point2d first;
	Point2d second(3.0, 4.0);
	first.print();
	second.print();
	//std::cout << "Distance between two points: " << first.distanceTo(second) << '\n';
	std::cout << "Distance between two points: " << distanceFrom(first, second) << '\n';

	return 0;
}

