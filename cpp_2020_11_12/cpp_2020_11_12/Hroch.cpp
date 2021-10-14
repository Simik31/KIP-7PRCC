#include "Hroch.h"

Hroch::Hroch(int id) : Zvire(id) {

}

Hroch::~Hroch() {

}

std::string Hroch::Nakrmit() {
	return "Nakrmit hrocha s id = " + std::to_string(this->dejID()) + " ovocem";
}