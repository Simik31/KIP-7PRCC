#include "Zirafa.h"

Zirafa::Zirafa(int id) : Zvire(id) {

}

Zirafa::~Zirafa() {

}

std::string Zirafa::Nakrmit() {
	return "Nakrmit zirafu s id = " + std::to_string(this->dejID()) + " listim";
}