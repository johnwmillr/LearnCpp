//
//  RandomNumbers.h
//  Game_HighLow
//
//  Created by John Miller on 1/3/17.
//  Copyright © 2017 John W. Miller. All rights reserved.
//

#ifndef RandomNumbers_h
#define RandomNumbers_h

#include <cstdlib> // for rand() and srand()


int getRandomNum(int min = 0, int max = 100)
{
    static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
    return static_cast<int>(rand() * fraction * (max-min+1) + min);
}



#endif /* RandomNumbers_h */
