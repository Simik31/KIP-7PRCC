#include "Pes.h"

Pes::Pes(int id) : Zvire(id) {

}

Pes::~Pes() {

}

std::string Pes::Nakrmit() {
	return "Nakrmit psa s id = " + std::to_string(this->dejID()) + " masem";
}