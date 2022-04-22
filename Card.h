#pragma once

#include <iostream>
#include <string>

class Card {

private:
		int id;
		std::string face;
		int value;
		Card* next;
		Card* prev;

public:
	Card();
	Card(Card* pv, int i, int val, Card* nx);
	int getId();
	Card* getNext();
	Card* getPrev();
	std::string getFace();

	void setId(int);
	void setValue(int);
	void setFace(std::string);
	void setNext(Card* nx);
	void setPrev(Card* pv);
	~Card();
};
