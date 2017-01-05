#include <iostream>


namespace Animals
{
  enum Animals
    {
      ANIMALS_CHICKEN,
      ANIMALS_DOG,
      ANIMALS_CAT,
      ANIMALS_ELEPHANT,
      ANIMALS_DUCK,
      ANIMALS_SNAKE,
      ANIMALS_MAX_LENGTH
    };
};

int main()
{
  using std::cout;
  using std::cin;

  int animalLegs[Animals::ANIMALS_MAX_LENGTH] = {2,4,4,4,2,0};

  cout << "An elephant has " << animalLegs[Animals::ANIMALS_ELEPHANT] << " legs.\n";


  // Ask user for input
  int num;
  do
  {
    cout << "\nEnter a number between 1 and 9: ";
    cin >> num;
    if (cin.fail())
    {
      cin.clear();
      cin.ignore(32767, '\n');
    }
  }
  while (num < 1 | num > 9);

  // Print the array once user supplies a number
  const int arrayLength(9);  
  int array[arrayLength] = {4,6,7,3,8,2,1,9,5};

  for (int i = 0; i < arrayLength; ++i)
    cout << "Num " << i << ":\t" << array[i] << "\n";

  // Search array for the number
  int count = 0;
  for (int i = 0; i < arrayLength; i++)
    {
      if (array[i]==num)
	{
	  break;
	}
      ++count;
    }
  cout << "The number the user picked (" << num << ") is element " << count << " in the array.\n";
        
  return 0;
}
