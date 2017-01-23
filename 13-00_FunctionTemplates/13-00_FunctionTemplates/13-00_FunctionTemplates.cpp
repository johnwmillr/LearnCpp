// 13-00_FunctionTemplates.cpp : Defines the entry point for the console application.
#include "stdafx.h"
#include <iostream>
#include "Cents.h"
#include "Array.h"
#include "Pair.h"
#include "Pair2.h"
#include "StringValuePair.h"

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

	/*
	Cents array3[] = { Cents(5), Cents(10), Cents(15), Cents(14) };
	std::cout << "Average in array: " << average(array3, 4) << '\n';	
		
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
	std::cout << "\n----------Pair\n";
	Pair<int> p1(5,8);
	std::cout << "Pair: " << p1.first() << ' ' << p1.second() << '\n';
 
	const Pair<double> p2(2.3, 4.5);
	std::cout << "Pair: " << p2.first() << ' ' << p2.second() << '\n';

	// -----------------------------------------------
	// Pair2 class (mixed type pairs)
	std::cout << "\n----------Pair2\n";
	Pair2<int, double> p3(5, 6.7);
	std::cout << "Pair: " << p3.first() << ' ' << p3.second() << '\n';
 
	const Pair2<double, int> p4(2.3, 4);
	std::cout << "Pair: " << p4.first() << ' ' << p4.second() << '\n';
	*/
	// -----------------------------------------------
	// StringValuePair class
	std::cout << "\n----------StringValuePair\n";
	StringValuePair<int> svp("Hello", 5);
	std::cout << "Pair: " << svp.first() << ' ' << svp.second() << '\n';

	return 0;
}

