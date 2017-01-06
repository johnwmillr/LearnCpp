// http://www.learncpp.com/cpp-tutorial/6-x-chapter-6-comprehensive-quiz/

#include <iostream>
#include <array>

struct Student
{
  std::string name;
  int grade;

};

void sortArray(Student *array, int length)
{
  // Step through each element of the array
  for (int startIndex = 0; startIndex < length; ++startIndex)
    {
      int largestIndex = startIndex;

      for (int currentIndex = startIndex + 1; currentIndex < length; ++currentIndex)
	{
	  if (array[currentIndex].grade > array[largestIndex].grade)
	    largestIndex = currentIndex;
	}
      std::swap(array[startIndex], array[largestIndex]);
    }
}

void printStudentInfo(Student *array, int length)
{
  for (int i = 0; i < length; ++i)
    {
      std::cout << array[i].name << " got a grade of " << array[i].grade << '\n';
    }
}

int main()
{
  // Ask for number of students  
  int n_students;
  std::cout << "How many students do you need to enter? ";  
  std::cin >> n_students;  

  // Dynamically allocate an array to hold the info for each student
  Student *AllStudents = new Student[n_students]; 

  // Ask for each student's info
  for (int n = 0; n < n_students; ++n)
    {
      std::cout << "Name: ";
      std::cin >> AllStudents[n].name;
      std::cout << "Grade: ";
      std::cin >> AllStudents[n].grade;
      std::cout << '\n';
    }  

  // Sort the array from highest to lowest grade
  sortArray(AllStudents, n_students);

  // Print the sorted array
  printStudentInfo(AllStudents, n_students);
  
  // Delete the dynamically-allocated memory
  delete[] AllStudents;
  AllStudents = nullptr;

  return 0;
}
