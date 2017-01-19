#include "stdafx.h"
#include <array>
#include <iostream>
#include <cstdlib> // for rand() and srand()
#include "Card.h"
#include "Deck.h"

// constructor
Deck::Deck()
{	
	int n = 0; // Count cards
	for (int s = 0; s < Card::MAX_SUITS; ++s) // Loop through each suit
	{
		for (int r = 0; r < Card::MAX_RANKS; ++r)
		{			
			m_deck[n] = Card(static_cast<Card::CardRank>(r),static_cast<Card::CardSuit>(s));
			++n;
		}
	}
}

void Deck::printDeck()
{	
	for (int i=0; i<52; i++)	
	{		
		Card card = m_deck[i];
		card.printCard();
		std::cout << ' ';
	}
 
	std::cout << '\n';
}

void Deck::shuffleDeck()
{
	// Step through each card in the deck
	for (int index = 0; index < 51; ++index)
	{
		// Pick a random card, any card
		int swapIndex = getRandomNumber(0, 51);
		// Swap it with the current card		
		swapCard(m_deck[index], m_deck[swapIndex]);
	}
}

void Deck::swapCard(Card &a, Card &b)
{
	Card temp = a;
	a = b;
	b = temp;
}
 
// Generate a random number between min and max (inclusive)
// Assumes srand() has already been called
int Deck::getRandomNumber(int min, int max)
{
	static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);  // static used for efficiency, so we only calculate this value once
 	// evenly distribute the random number across our range
	return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}