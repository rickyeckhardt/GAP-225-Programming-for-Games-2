#pragma once

#include "Deck.h"

constexpr int kChoiceShuffle = 0;
constexpr int kChoiceDraw = 1;
constexpr int kChoicePrintHand = 2;
constexpr int kChoiceDiscard = 3;
constexpr int kChoiceReturnDiscardToDraw = 4;
constexpr int kChoiceQuit = 5;

constexpr int kChoiceCount = 6;

/////////////////////////////////////////////////////////////////
// An interactive sandbox for testing the Deck class.
/////////////////////////////////////////////////////////////////
class DeckSandbox
{
private:
	Deck m_deck;
	Deck::Card* m_pHand[52];
	int m_numCardsInHand;

	std::string m_menuChoices[kChoiceCount]
	{
		"Shuffle the draw pile",
		"Draw a card",
		"Print your hand",
		"Discard a card",
		"Return discard pile to draw pile and shuffle",
		"Close program"
	};

public:
	DeckSandbox();
	void Run();

private:
	void ShowMenu();
	int GetChoice();
	void ProcessChoice(int choice);

	void Draw();
	void PrintHand();
	void Discard();
	void ReturnDiscardToDraw();
};

