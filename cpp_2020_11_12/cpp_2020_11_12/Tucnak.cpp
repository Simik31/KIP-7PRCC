#include "Tucnak.h"

Tucnak::Tucnak(int id) : Zvire(id) {

}

Tucnak::~Tucnak() {

}

std::string Tucnak::Nakrmit() {
	return "Nakrmit tucnaka s id = " + std::to_string(this->dejID()) + " rybama";
}