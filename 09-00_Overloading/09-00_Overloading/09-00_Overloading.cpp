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
		reduce();
	}
	
	static int gcd(int a, int b)
	{
		return b == 0 ? a : gcd(b, a % b);
	}

	void reduce()
	{
		int gcd = Fraction::gcd(m_num, m_den);
		m_num /= gcd;
		m_den /= gcd;
	}

	// Operator Overloading
	// Multiplication
	friend Fraction operator*(const Fraction &f1, int num);
	friend Fraction operator*(int num, const Fraction &f1);	
	friend Fraction operator*(const Fraction &f1, const Fraction &f2);

	// Input/Output	
	friend std::ostream& operator<< (std::ostream &out, const Fraction &frac);
	friend std::istream& operator>> (std::istream &in, Fraction &frac);
};

Fraction operator*(const Fraction &f1, int num)
{
	return Fraction(f1.m_num*num,f1.m_den);
}

Fraction operator*(int num, const Fraction &f1)
{
	return Fraction(f1.m_num*num,f1.m_den);
}

Fraction operator*(const Fraction &f1, const Fraction &f2)
{
	return Fraction(f1.m_num*f2.m_num,f1.m_den*f2.m_den);
}

std::ostream& operator<<(std::ostream &out, const Fraction &frac)
{
	out << frac.m_num << "/" << frac.m_den;
	return out;
}

std::istream& operator>>(std::istream &in, Fraction &frac)
{
	char c;
	
	in >> frac.m_num;
	in >> c; // ignore the '/' separator
	in >> frac.m_den;
	return in;
}

int main()
{

	Fraction f1;
	std::cout << "Enter fraction 1: ";
	std::cin >> f1;
 
	Fraction f2;
	std::cout << "Enter fraction 2: ";
	std::cin >> f2;
 
	//std::cout << f1 << " * " << f2 << " is " << f1 * f2 << '\n';
	return 0;
}