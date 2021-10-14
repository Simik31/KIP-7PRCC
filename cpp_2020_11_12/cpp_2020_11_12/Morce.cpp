#include "Morce.h"

Morce::Morce(int id) : Zvire(id) {

}

Morce::~Morce() {

}

std::string Morce::Nakrmit() {
	return "Nakrmit morce s id = " + std::to_string(this->dejID()) + " orechy";
}