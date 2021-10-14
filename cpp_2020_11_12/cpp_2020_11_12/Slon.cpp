#include "Slon.h"

Slon::Slon(int id) : Zvire(id) {

}

Slon::~Slon() {

}

std::string Slon::Nakrmit() {
	return "Nakrmit slona s id = " + std::to_string(this->dejID()) + " senem";
}