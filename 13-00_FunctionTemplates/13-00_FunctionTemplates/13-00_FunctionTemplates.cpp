// 13-00_FunctionTemplates.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Array.h"
#include "Pair.h"


template <typename T>
const T& max(const T& x, const T& y)
{
	return (x > y) ? x : y;
}

class Cents
{
private:
	int m_cents;
public:
	Cents(int cents) : m_cents(cents)
	{
	}

	friend bool operator>(Cents &c1, Cents &c2)
	{
		return (c1.m_cents > c2.m_cents);
	}

	friend std::ostream& operator<< (std::ostream &out, const Cents &cents)
	{
		out << cents.m_cents << " cents ";
		return out;
	}

	void operator+=(Cents cents)
	{
		m_cents += cents.m_cents;
	}

	void operator/=(int value)
	{
		m_cents /= value;
	}
};

template <class T>
T average(T *array, int length)
{
	T sum = 0;
	for (int count=0; count < length; ++count)
		sum += array[count];

	sum /= length;
	return sum;
}

int main()
{

	Cents array3[] = { Cents(5), Cents(10), Cents(15), Cents(14) };
	std::cout << average(array3, 4) << '\n';		

	// Templated array class
	Array<int> intArray(12);
	Array<double> doubleArray(12);

	for (int count = 0; count < intArray.getLength(); ++count)
	{
		intArray[count] = count;
		doubleArray[count] = count + 0.5;
	}

	for (int count = intArray.getLength()-1; count >= 0; --count)
		std::cout << intArray[count] << '\t' << doubleArray[count] << '\n';

	// -----------------------------------------------
	// Pair class
	Pair<int> p1(5,8);
	std::cout << "Pair: " << p1.first() << ' ' << p1.second() << '\n';
 
	//const Pair<double> p2(2.3, 4.5);
	//std::cout << "Pair: " << p2.first() << ' ' << p2.second() << '\n';




	return 0;
}

