#include <algorithm>
#include <iostream>

// http://www.learncpp.com/cpp-tutorial/64-sorting-an-array-using-selection-sort/


int main()
{
  int x = 2;
  int y = 4;
  std::cout << "Before swap: x = " << x << ", y = " << y << '\n';
  std::swap(x,y); // swap the values of x and y
  std::cout << "After swap: x = " << x << ", y = " << y << '\n';


  // ----------------------------------
  // Selection sort
  {
  std::cout << "\nSelection sort";
  const int length = 5;
  int array[length] = {30, 50, 20, 10, 40};

  // Print the unsorted array
  std::cout << "\nUnsorted: ";
  for (int i = 0; i < length; ++i)
    std::cout << array[i] << ' ';
  std::cout << std::endl;

  // Step through each element of the array
  for (int startIndex = 0; startIndex < length; ++startIndex)
  {
    int smallestIndex = startIndex;
    
    // Look for smallest element remaining in the array (starting at i+1)
    for (int currentIndex = startIndex + 1; currentIndex < length; ++currentIndex)
      {
	// If the current element is smaller than our previously found smallest
	if (array[currentIndex] < array[smallestIndex])	  
	  smallestIndex = currentIndex;			
      } 

    // Swap our start element w/ our smallest element
    std::swap(array[startIndex], array[smallestIndex]);	      
  }
  
  // Now print our sorted array
  std::cout << "Sorted:   ";
  for (int i = 0; i < length; ++i)
    std::cout << array[i] << ' ';
  std::cout << std::endl;
  }

  // ----------------------------------
  // Bubble sort
  {
    std::cout << "\nBubble sort";
    const int length = 9;
    int array[length] = {6, 3, 2, 9, 7, 1, 5, 4, 8};

    // Print the unsorted array
    std::cout << "\nUnsorted: ";
    for (int i = 0; i < length; ++i)
      std::cout << array[i] << ' ';
    std::cout << std::endl;

    
    // Perform the sort
    int iteration = 0;
    bool array_is_unsorted = true;
    do
    {
      int n_swaps = 0;
      for (int i = 0; i < (length-1-iteration); ++i)
	{      
	  if (array[i] > array[i+1])
	    {
	      std::swap(array[i], array[i+1]);
	      ++n_swaps;
	    }
	}
      if (n_swaps == 0)
	array_is_unsorted = false;
      ++iteration;
    }
    while (array_is_unsorted);
    
    // Now print our sorted array
    std::cout << "Sorted:   ";
    for (int i = 0; i < length; ++i)
      std::cout << array[i] << ' ';
    std::cout << std::endl;
    std::cout << "Termination on iteration: " << iteration << "\n";
  }
  return 0;
}
