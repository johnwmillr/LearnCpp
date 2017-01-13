#include "stdafx.h"
#include <iostream>
#include "Date.h"

// Date constructor
Date::Date(int year, int month, int day)
{
	SetDate(year, month, day);
}

// Date member functions
void Date::SetDate(int year, int month, int day)
{
	m_year  = year;
	m_month = month;
	m_day   = day;
}

void Date::Print()
{
	std::cout << getYear() << "/" << getMonth() << "/" << getDay() << '\n';
}