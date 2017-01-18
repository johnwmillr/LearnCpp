#ifndef MONSTER_H
#define MONSTER_H
#include <string>


class Monster
{
public:
	enum MonsterType // Looks like this enum has to go in the .h file, not .cpp
	{
		DRAGON,
		GOBLIN,
		OGRE,
		ORC,
		SKELETON,
		TROLL,
		VAMPIRE,
		ZOMBIE,
		MAX_MONSTER_TYPES
	};

private:	
	MonsterType m_type;
	std::string m_name;
	std::string m_roar;
	int m_hitPoints;

public:
	// Constructor (wasn't working when I declared it in the .cpp file)
	Monster(MonsterType type, std::string name, std::string roar, int hitPoints);		
	std::string getTypeString();
	void print();

	// Getters
	std::string getName() const {return m_name;}
	std::string getRoar() const {return m_roar;}
	int getHitPoints() const {return m_hitPoints;}

};

#endif