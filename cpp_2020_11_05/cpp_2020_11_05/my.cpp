#include "my.h"

My::My(int id) {
	this->id = id;
	pocetInstanci++;
}

My::~My() {
	pocetInstanci--;
}

int My::getId() const {
	return id;
}

int My::GetCountOfInstances() {
	return pocetInstanci;
}