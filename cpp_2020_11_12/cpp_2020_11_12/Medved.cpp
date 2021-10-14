#include "Medved.h"

Medved::Medved(int id) : Zvire(id) {

}

Medved::~Medved() {

}

std::string Medved::Nakrmit() {
	return "Nakrmit medveda s id = " + std::to_string(this->dejID()) + " masem";
}