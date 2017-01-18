// 08-15_Quiz03_Monsters.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <ctime> // for time()
#include <cstdlib> // for rand() and srand()
#include "Monster.h"
#include "MonsterGenerator.h"

int main()
{
	srand(static_cast<unsigned int>(time(0)));
	rand(); // Discard first random value (Visual Studio)

	//Monster skele(Monster::SKELETON, "Bones", "*rattle*", 4);
	//skele.print();
		
	for (int i=0; i < 5; i++) // Randomly generate 5 monsters
	{
		Monster m = MonsterGenerator::generateMonster();
		m.print();
	}
	
	return 0;
}

