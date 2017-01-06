#ifndef CARDGAME_H
#define CARDGAME_H

#include <array>

// Variable definitions
enum Rank
{
  RANK_2,
  RANK_3,
  RANK_4,
  RANK_5,
  RANK_6,
  RANK_7,
  RANK_8,
  RANK_9,
  RANK_10,
  RANK_JACK,
  RANK_QUEEN,
  RANK_KING,
  RANK_ACE,
  MAX_RANKS
};

enum Suit
{
  SUIT_CLUB,
  SUIT_DIAMOND,
  SUIT_HEART,
  SUIT_SPADE,
  MAX_SUITS
};

struct Card
{
  Rank rank;
  Suit suit;
};

// Forward declaration of functions
void printCard(const Card &card);
std::array<Card,52> createDeck();
int getCardValue(const Card &card);
void swapCard(Card &a, Card &b);
int getRandomNumber(int min, int max);
void shuffleDeck(std::array<Card,52> &deck);
void printDeck(const std::array<Card,52> &deck);

#endif
