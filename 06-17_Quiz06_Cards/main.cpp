// http://www.learncpp.com/cpp-tutorial/6-x-chapter-6-comprehensive-quiz/

#include <iostream>
#include <array>
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time()
#include "CardGame.h"

int main()
{
  // Random seeding
  srand(static_cast<unsigned int>(time(0))); // set initial seed value to system clock
  rand(); // Throw out the first rand value produced

  // Create a deck w/ all 52 cards  
  std::array<Card,52> deck = createDeck();
                
  // Print the entire deck
  //printDeck(deck);

  // Shuffle the deck and print
  //shuffleDeck(deck);
  //std::cout << "Okay, we shuffled the deck:";
  //printDeck(deck);

  // Get the value of the first card in the shuffled deck
  Card card = deck[0];
  int  value = getCardValue(card);
  printCard(card);
  //std::cout << '\nCard value is: ' << value << '\n';
  

  return 0;
}
