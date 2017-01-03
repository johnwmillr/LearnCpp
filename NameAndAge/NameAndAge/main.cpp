//
//  main.cpp
//  NameAndAge
//
//  Created by John Miller on 1/3/17.
//  Copyright © 2017 John W. Miller. All rights reserved.
//

#include <iostream>
#include <string>


std::string getFullName()
{
    
    std::cout << "What is your full name?\n";
    std::string name;
    std::getline(std::cin, name); // read a full line of text into name
    
    return name;
}

int getAge()
{
    std::cout << "Enter your age: ";
    int age;
    std::cin >> age;
    std::cin.ignore(32767, '\n');
    
    return age;
}

double calcAgePerLetter(std::string userName, int userAge)
{
    double nameLength = userName.length();
    double agePerLetter = static_cast<double>(userAge) / nameLength;
    return agePerLetter;
}

void printAgePerLetter(double ageResult)
{
    std::cout << "You've lived " << ageResult << " years for each letter in your name.\n";
}

int main() {
    // insert code here...
    
    printAgePerLetter(calcAgePerLetter(getFullName(),getAge()));
    
    
    return 0;
}
