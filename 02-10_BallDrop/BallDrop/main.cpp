//
//  main.cpp
//  BallDrop
//
//  Created by John Miller on 1/3/17.
//  Copyright © 2017 John W. Miller. All rights reserved.
//

#include <iostream>
#include <cmath>
#include "constants.h"

int main() {
    // insert code here...

    double initialHeight;
    using std::cout;
    using std::cin;
    
    cout << "Enter the initial height of the tower in meters: ";
    cin >> initialHeight;
    
    
    // Simulate the ball drop
    int t = 0;
    double height;
    bool ballIsFalling = true;
    while (ballIsFalling) {
        height = initialHeight - ((constants::g)*pow(t,2))/2;
        
        if (height <= 0){
            ballIsFalling = false;
            cout << "At " << t << " seconds, the ball is on the ground.\n";
        }
        else {
            cout << "At " << t << " seconds, the ball is at height: " << height << " meters\n";
        }
        t = t + 1;
    }
    
    return 0;
}
