//
//  MonsterTypes.h
//  EnumGame
//
//  Created by John Miller on 1/3/17.
//  Copyright © 2017 John W. Miller. All rights reserved.
//

#ifndef MonsterTypes_h
#define MonsterTypes_h

struct Monster {
    
    enum MonsterType
    {
        MONSTERTYPE_ORC,
        MONSTERTYPE_GOBLIN,
        MONSTERTYPE_TROLL,
        MONSTERTYPE_OGRE,
        MONSTERTYPE_SKELETON,
        MONSTERTYPE_DRAGON
    };
    
    MonsterType type;
    std::string name;
    int health;
    
};

std::string getType(Monster monster)
{
    
    switch (monster.type) {
        case 0:
            return "Orc";
        case 1:
            return "Goblin";
        case 2:
            return "Troll";
        case 3:
            return "Ogre";
        case 4:
            return "Skeleton";
        case 5:
            return "Dragon";
        default:
            break;
    }
    return "Unknown";
}

void printMonster(Monster monster)
{
    using namespace std;
    cout << "This " << getType(monster) << " is named " << monster.name << " and has " << monster.health << " health.\n";
}

#endif /* MonsterTypes_h */
