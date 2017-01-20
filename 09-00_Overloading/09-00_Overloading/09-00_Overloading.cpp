// 09-00_Overloading.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

class Fraction
{
private:
	int m_num;
	int m_den;
public:
	Fraction(int num=0, int den=0) : m_num(num), m_den(den)
	{
	}

	
	friend Fraction operator*(Fraction frac, int num)
	{
		return Fraction(frac.m_num*num,frac.m_den);
	}

	friend Fraction operator*(int num, Fraction frac)
	{
		return Fraction(frac.m_num*num,frac.m_den);
	}

	friend Fraction operator*(Fraction f1, Fraction f2)
	{
		return Fraction(f1.m_num*f2.m_num,f1.m_den*f2.m_den);
	}

	void print()
	{
		std::cout << m_num << "/" << m_den << '\n';
	}
};


int main()
{

	Fraction f1(2, 5);
    f1.print();
 
    Fraction f2(3, 8);
    f2.print();
 
    Fraction f3 = f1 * f2;
    f3.print();
 
    Fraction f4 = f1 * 2;
    f4.print();
 
    Fraction f5 = 2 * f2;
    f5.print();
 
    Fraction f6 = Fraction(1, 2) * Fraction(2, 3) * Fraction(3, 4);
    f6.print();

	return 0;
}

