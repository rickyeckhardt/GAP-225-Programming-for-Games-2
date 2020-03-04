#pragma once

#include <assert.h>
#include <string>

constexpr int kNumFaceValues = 13;	// There are 13 unique card values, including Ace, Jack, Queen, King
constexpr int kNumSuits = 4;		// There are 4 suits

/////////////////////////////////////////////////////////////////
// A standard playing card deck implementation.
/////////////////////////////////////////////////////////////////
class Deck
{
public:
	/////////////////////////////////////////////////////////////////
	// A playing card implementation.
	/////////////////////////////////////////////////////////////////
	class Card
	{
	private:
		int m_faceValue;
		int m_suit;

		int m_minFaceValue = 1;
		int m_maxFaceValue = 13;
		std::string m_faceNames[kNumFaceValues]{ "Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King" };

		int m_minSuitValue = 0;
		int m_maxSuitValue = 3;
		std::string m_suitNames[kNumSuits]{ "Clubs", "Diamonds", "Hearts", "Spades" };

	public:
		Card(int faceValue, int suit)
			: m_faceValue{ faceValue }
			, m_suit{suit}
		{
			assert(faceValue >= m_minFaceValue && faceValue <= m_maxFaceValue);
			assert(suit >= m_minSuitValue && suit <= m_maxFaceValue);
		}

		int GetFaceValue() { return m_faceValue; }
		int GetSuit() { return m_suit; }

		/////////////////////////////////////////////////////////////////
		// Returns this card's name in the form "(FaceValue) of (Suit)s"
		/////////////////////////////////////////////////////////////////
		std::string GetName()
		{
			return GetFaceName() + " of " + GetSuitName();
		}

	private:
		/////////////////////////////////////////////////////////////////
		// Converts this card's face value to a word from m_faceNames.
		/////////////////////////////////////////////////////////////////
		std::string GetFaceName()
		{
			return m_faceNames[m_faceValue - 1];
		}

		/////////////////////////////////////////////////////////////////
		// Converts this card's suit value to a word from m_suitNames.
		/////////////////////////////////////////////////////////////////
		std::string GetSuitName()
		{
			return m_suitNames[m_suit];
		}
	};

private:
	// All cards are stored here, regardless of where they are
	Card* m_pAllCards[kNumFaceValues * kNumSuits];

	// Draw pile
	int m_drawPileSize;
	Card* m_pDrawPile[kNumFaceValues * kNumSuits];
	
	// Discard pile
	int m_discardPileSize;
	Card* m_pDiscardPile[kNumFaceValues * kNumSuits];

public:
	Deck();
	~Deck();

	// Place a card on top of the main pile.
	void AddToDrawPile(Card* pCard) { AddCardToPile(pCard, m_pDrawPile, m_drawPileSize); }

	// Shuffle the main pile.
	void ShuffleDrawPile() { Shuffle(m_pDrawPile, m_drawPileSize); }

	// Draw from the main pile.
	Card* DrawFromDrawPile() { return DrawCard(m_pDrawPile, m_drawPileSize); }

	// Place a card on top of the discard pile.
	void AddToDiscardPile(Card* pCard) { AddCardToPile(pCard, m_pDiscardPile, m_discardPileSize); }
	
	// Shuffle the discard pile.
	void ShuffleDiscardPile() { Shuffle(m_pDiscardPile, m_discardPileSize); }
	
	// Draw from the discard pile.
	Card* DrawFromDiscardPile() { return DrawCard(m_pDiscardPile, m_discardPileSize); }

private:
	void CreateCards();
	void AddCardToPile(Card* pCard, Card** ppPile, int& pileSize);
	void Shuffle(Card** ppPile, int pileSize);
	Card* DrawCard(Card** ppPile, int& pileSize);
};