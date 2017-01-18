#ifndef MONSTERGENERATOR_H
#define MONSTERGENERATOR_H

#include <string>
#include <array>
#include "Monster.h"


class MonsterGenerator
{

public:		
	// Generate a random number between min and max (inclusive)
	// Assumes srand() has already been called
	static int getRandomNumber(int min, int max)
	{
		static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);  // static used for efficiency, so we only calculate this value once
		// evenly distribute the random number across our range
		return static_cast<int>(rand() * fraction * (max - min + 1) + min);
	}

	static Monster generateMonster()
	{
		// Pick a random type
		Monster::MonsterType s_type =
			static_cast<Monster::MonsterType>(getRandomNumber(0,Monster::MAX_MONSTER_TYPES-1));
		
		// Names and sounds
		static std::string s_names[6] = {"Jerry","Paul","Mary","Bender","Fry","Leela"};														
		static std::string s_roars[6] = {"*burp*","*yell*","*grunt*","*shout*","*gurgle*","*scream*"};

		// Create the instance of a Monster
		return Monster(s_type, s_names[getRandomNumber(0,5)], s_roars[getRandomNumber(0,5)], getRandomNumber(1,100));					
	}

};

#endif