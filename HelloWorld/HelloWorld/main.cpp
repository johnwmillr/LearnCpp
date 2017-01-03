//
//  main.cpp
//  HelloWorld
//
//  Created by John Miller on 1/3/17.
//  Copyright © 2017 John W. Miller. All rights reserved.
//

#include <iostream>
#include <cmath>

int main() {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    
    int num = 2;
    int power = 4;
    
    std::cout << "Let's do some math.\n";
    
    int realAnswer = pow(num,power);
    int userAnswer;
    bool correct = false;
    
    // Loop until user enters the correct answer
    while (!correct) {
        std::cout << "What is " << num << " raised to " << power << "?\n";
        std::cin >> userAnswer;
        if (userAnswer == realAnswer) {
            std::cout << "Correct!\n";
            correct = true;
        }
        else {
            std::cout << "That is incorrect.\n  Try again.\n\n";
        }
    }
    
    return 0;
}
