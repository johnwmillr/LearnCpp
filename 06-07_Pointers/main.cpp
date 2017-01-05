// http://www.learncpp.com/cpp-tutorial/67-introduction-to-pointers/

#include <iostream>
#include <array>

int main()
{
  using std::cout;

  // Referencing and dereferencing
  int x = 6;
  cout <<   x << '\n'; // Print the value of variable x
  cout <<  &x << '\n'; // Print the memory address of variable x
  cout << *&x << '\n'; // Print the value at the memory address of variable x

  std::cout << std::endl;

  // Pointers
  int value = 5;
  int *ptr = &value; // Initialize the pointer w/ address of value
  
  cout << &value << '\n';  // Print the address of the variable value
  cout << ptr << '\n';     // Print the address that ptr is holding

  // std::array
  std::array<int, 3> myarray = {3, 2, 1}; // declare an integer array with length 3

  cout << "Here is the first element of the array: " << myarray[0] << std::endl;
  cout << "The array is of length " << myarray.size() << std::endl;


  return 0;
}
