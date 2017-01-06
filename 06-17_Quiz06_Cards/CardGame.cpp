// http://www.learncpp.com/cpp-tutorial/6-x-chapter-6-comprehensive-quiz/

#include <iostream>
#include <array>
#include "CardGame.h"

void printCard(const Card &card)
{
  using std::cout;
  char cardInfo[2];

  switch(card.rank)
  {
  case RANK_2:     cardInfo[0] = '2'; break;    
  case RANK_3:     cardInfo[0] = '3'; break;    
  case RANK_4:     cardInfo[0] = '4'; break;    
  case RANK_5:     cardInfo[0] = '5'; break;    
  case RANK_6:     cardInfo[0] = '6'; break;    
  case RANK_7:     cardInfo[0] = '7'; break;    
  case RANK_8:     cardInfo[0] = '8'; break;    
  case RANK_9:     cardInfo[0] = '9'; break;    
  case RANK_10:    cardInfo[0] = 'T'; break;    
  case RANK_JACK:  cardInfo[0] = 'J'; break;    
  case RANK_QUEEN: cardInfo[0] = 'Q'; break;    
  case RANK_KING:  cardInfo[0] = 'K'; break;    
  case RANK_ACE:   cardInfo[0] = 'A'; break;    
  default: cardInfo[0] = 'X'; break;
    
  };
  
  switch(card.suit)
  {
  case SUIT_CLUB:    cardInfo[1] = 'C'; break;    
  case SUIT_DIAMOND: cardInfo[1] = 'D'; break;    
  case SUIT_HEART:   cardInfo[1] = 'H'; break;    
  case SUIT_SPADE:   cardInfo[1] = 'S'; break;    
  default: cardInfo[1] = 'X'; break;    
  };

  // Print the info for the given card
  cout << cardInfo[0] << cardInfo[1] << '\n';

}

// Function to create a deck -- seems to work?
std::array<Card,52> createDeck()
{
  std::array<Card,52> deck;
  int card = 0; // Count cards
  for (int s = 0; s < MAX_SUITS; ++s) // Loop through each suit
  {
    for (int r = 0; r < MAX_RANKS; ++r)
    {
      deck[card].rank = static_cast<Rank>(r);
      deck[card].suit = static_cast<Suit>(s);
      ++card;
    }
  }

  return deck;
}

int getCardValue(const Card &card)
{    
  int value = static_cast<int>(card.rank) + 2; // +2 to account for enum start at 0
  
  if(value >= 10 && value < 14) // Ten, Jack, Queen, King
    value = 10;
  if(value == 14) // Ace
    value = 11;

  return value;
}

void swapCard(Card &a, Card &b) // Not sure why the & makes this work...
{
  Card temp = a;
  a = b;
  b = temp; 
}

int getRandomNumber(int min = 0, int max = 51)
{
  static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
  return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}

void shuffleDeck(std::array<Card,52> &deck)
{
  for (auto &card: deck)
  {    
    swapCard(card,deck[getRandomNumber()]);
  }
}

void printDeck(const std::array<Card,52> &deck)
{
  for (const auto &card : deck)    
  {
    printCard(card);
    std::cout << '\n';
  }

}
