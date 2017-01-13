// 08-00_Classes.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

class DateClass
{
public:
	int m_year;
	int m_month;
	int m_day;

	void print()
	{
		std::cout << m_year << "/" << m_month << "/" << m_day << '\n';
	}
};

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

class Ball
{
	std::string m_color;
	double m_radius;

public:
	Ball(const std::string &color = "Black", double radius = 10.0)
	{
		m_color = color;
		m_radius = radius;
	}

	void print()
	{
		std::cout << "Color: " << m_color << ", Radius: " << m_radius << '\n';
	}
};

int main()
{		
	// DateClass
	DateClass today = {2017, 1, 13};
	today.print();

	// Employees
	Employee alex = {"Alex", 1, 25.00};
	Employee emily = {"Emily", 2, 22.25};

	// Print out the employee information
	alex.print();
	emily.print();

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

	// Ball quiz
	Ball def;
	def.print();

	Ball blue("blue");
	blue.print();

	Ball blueTwenty("blue", 20.0);
	blueTwenty.print();

	return 0;
}

