#include "Tygr.h"

Tygr::Tygr(int id) : Zvire(id) {

}

Tygr::~Tygr() {

}

std::string Tygr::Nakrmit() {
	return "Nakrmit tygra s id = " + std::to_string(this->dejID()) + " masem";
}