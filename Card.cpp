#include "Card.h"

using namespace std;

//constructors
Card::Card() {
	next = nullptr;
	prev = nullptr;
	id = -1;
	value = 0;
	face = "";
}
Card::Card(Card* pv, int i, int val, Card* nx) {
	prev = pv;
	id = i;
	value = val;
	next = nx;
}

//getters
int Card::getId() {
	return id;
}
Card* Card::getNext() {
	return next;
}
Card* Card::getPrev() {
	return prev;
}
string Card::getFace() {
	return face;
}

//setters
void Card::setId(int i) {
	id = i;
}
void Card::setValue(int val) {
	value = val;
}
void Card::setFace(std::string fa) {
	face = fa;
}
void Card::setNext(Card* nx) {
	next = nx;
}
void Card::setPrev(Card* pv) {
	prev = pv;
}

//destructor
Card::~Card() {
	prev = nullptr;
	next = nullptr;
}