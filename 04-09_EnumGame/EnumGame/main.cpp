//
//  main.cpp
//  EnumGame
//
//  Created by John Miller on 1/3/17.
//  Copyright © 2017 John W. Miller. All rights reserved.
//

#include <iostream>
#include "MonsterTypes.h"

int main() {
    
    // Create instances of the monster structs
    Monster orc = {Monster::MONSTERTYPE_ORC,"Gorlock",110};
    Monster dragon = {Monster::MONSTERTYPE_DRAGON,"Smuag",5000};
    
    
    // Print info about the monsters
    printMonster(orc);
    printMonster(dragon);
    
    return 0;
}
