//
//  main.cpp
//  Game_HighLow
//
//  Created by John Miller on 1/3/17.
//  Copyright © 2017 John W. Miller. All rights reserved.
//

#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time()
#include "RandomNumbers.h"
#include "UserFunctions.h"

int main() {
    
    using std::cout;
    using std::endl;
    
    bool playAgain = false;
    
    
    do {
        cout << "\n\n-------- NEW GAME --------\n\n";
        // Throw out the first rand value (which is not very unique, run to run)
        srand(static_cast<unsigned int>(time(0)));
        rand();
        
        // Get random number
        int min = 1, max = 100;
        int answer = getRandomNum(min, max);
        
        
        // Interact w/ user
        int maxGuesses = 7;
        int count = 0;
        bool correct = false;
        int guess;
        do {
            guess = getNumFromUser(min,max);
            ++count;
            cout << "Guess: " << count << "/" << maxGuesses << "\t\t\t\t\t\t";
            
            // Check the user's guess
            if (guess == answer){
                correct = true;
                break;
            }
            else if (guess > answer)
                cout << "Too high!\n";
            else if (guess < answer)
                cout << "Too low!\n";
            
        } while (guess != answer & count < maxGuesses);
        
        // Check if user guessed the correct number
        if (correct == true)
            cout << "\nYou win!" << endl << endl;
        else
            cout << "\nYou lose! The correct number was " << answer << endl;
        
        cout << "\n\nPlay again? (1/0): ";
        std::cin >> playAgain;
        
    }
    while (playAgain);
    
    cout << "\nGoodbye!\n";
    
    return 0;
}
