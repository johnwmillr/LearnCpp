// 07-15_Quiz03_BinarySearch.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

// array is the array to search over.
// target is the value we're trying to determine exists or not.
// min is the index of the lower bounds of the array we're searching.
// max is the index of the upper bounds of the array we're searching.
// binarySearch() should return the index of the target element if the target is found, -1 otherwise
int binarySearch_Iterative(int *array, int target, int min, int max)
{
	int mid;	

	while (min <= max)
	{
		// Find the midpoint between the min and max indices
		mid = std::floor((min+max)/2.0);

		// Compare target value to mid value
		if (array[mid] > target)			 			 
			max = mid - 1;
		else if (array[mid] < target)			 
			min = mid + 1;
		else
			return mid;		 		 		 		 
	}
	return -1;
}

int binarySearch_Recursive(int *array, int target, int min, int max)
{	
	
	// Find the midpoint between the min and max indices
	int mid = std::floor((min+max)/2.0);
		
	// Compare target value to value at mid index
	if (array[mid] > target)
		max = mid - 1;
	else if (array[mid] < target)
		min = mid + 1;
	else
		return mid;

	// If the min/max indices haven't crossed yet, re-run the function
	if (min <= max)
		binarySearch_Recursive(array, target, min, max);
	else
		return -1;
}


int main()
{
	int array[] = {3, 6, 8, 12, 14, 17, 20, 21, 26, 32, 36, 37, 42, 44, 48};

	// We're going to test a bunch of values to see if they produce the expected results
	const int numTestValues = 9;
	// Here are the test values
	int testValues[numTestValues] = { 0, 3, 12, 13, 22, 26, 43, 44, 49 };
	// And here are the expected results for each value
	int expectedValues[numTestValues] = { -1, 0, 3, -1, -1, 8, -1, 13, -1 };

	// Loop through all of the test values
	for (int count=0; count < numTestValues; ++count)
	{
		// See if our test value is in the array
		//int index = binarySearch_Iterative(array, testValues[count], 0, 14);
		int index = binarySearch_Recursive(array, testValues[count], 0, 14);
		// If it matches our expected value, then great!
		if (index == expectedValues[count])
			std::cout << "test value " << testValues[count] << " passed!\n";
		else // otherwise, our binarySearch() function must be broken
			std::cout << "test value " << testValues[count] << " failed. There's something wrong w/ your code!\n";
	}

	return 0;
}

