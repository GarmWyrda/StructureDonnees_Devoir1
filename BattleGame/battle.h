#pragma once
#include "Pile.h"
#include "Card.h"


class battle
{
public:
	battle(int nbCardsPerPlayer, Pile<Card> deck);
	~battle();
	void exchangeSetsOfDecks();
	void distributeCards();
	Pile<Card>* startGame();

private:
	int nbCardsPerPlayer;
	Pile<Card> deck;
	Pile<Card> playersDecks[2], playersDecksWon[2];
	int gameResult[2];

};
