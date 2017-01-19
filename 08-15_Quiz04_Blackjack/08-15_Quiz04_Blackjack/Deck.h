#ifndef DECK_H
#define DECK_H

#include <array>
#include "Card.h"

class Deck
{
private:
	std::array<Card, 52> m_deck;

public:	
	Deck(); // constructor
	void printDeck();
	void shuffleDeck();
	
private:
	int getRandomNumber(int min, int max);
	void swapCard(Card a, Card b);

};


#endif