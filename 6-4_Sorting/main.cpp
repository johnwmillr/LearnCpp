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
}
