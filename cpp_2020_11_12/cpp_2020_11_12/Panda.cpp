#include "Panda.h"

Panda::Panda(int id) : Zvire(id) {

}

Panda::~Panda() {

}

std::string Panda::Nakrmit() {
	return "Nakrmit pandu s id = " + std::to_string(this->dejID()) + " bambusem";
}