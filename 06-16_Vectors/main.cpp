// http://www.learncpp.com/cpp-tutorial/6-16-an-introduction-to-stdvector/

#include <vector>
#include <iostream>

int main()
{
  std::vector<int> array {0, 1, 2};
  array.resize(5); // Set size to 5

  std::cout << "The length is: " << array.size() << '\n';
  
  for (auto const &element: array)
    std::cout << element << ' ';

  std::cout << std::endl;
  return 0;
}
