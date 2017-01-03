//
//  UserFunctions.h
//  Game_HighLow
//
//  Created by John Miller on 1/3/17.
//  Copyright © 2017 John W. Miller. All rights reserved.
//

#ifndef UserFunctions_h
#define UserFunctions_h

#include <iostream>

int getNumFromUser(int min, int max)
{
    int userNum;
    
    std::cout << "Pick a number between " << min << " and " << max << ": ";
    std::cin >> userNum;
    
    return userNum;
}


#endif /* UserFunctions_h */
