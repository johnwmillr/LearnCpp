#include "stdafx.h"
#include <iostream>
#include <string>
#include "Monster.h"

// Constructor
Monster::Monster(MonsterType type, std::string name, std::string roar, int hitPoints)
		: m_type(type), m_name(name), m_roar(roar), m_hitPoints(hitPoints)
{
}

// Get monster type as string
std::string Monster::getTypeString()
{	
	switch(m_type)
	{
		case DRAGON: return "dragon";			
		case GOBLIN: return "goblin";			
		case OGRE: return "ogre";			
		case ORC: return "orc";						
		case SKELETON: return "skeleton";						
		case TROLL: return "troll";			
		case VAMPIRE: return "vampire";			
		case ZOMBIE: return "zombie";					
	}
	return "UNKNOWN";
}

void Monster::print()
{
	std::cout << getName() << " the " << getTypeString()
		<< " has " << getHitPoints() << " hit points and says " << getRoar() << "\n";
}