#include "Krajta.h"

Krajta::Krajta(int id) : Zvire(id) {

}

Krajta::~Krajta() {

}

std::string Krajta::Nakrmit() {
	return "Nakrmit krajtu s id = " + std::to_string(this->dejID()) + " mysmi";
}