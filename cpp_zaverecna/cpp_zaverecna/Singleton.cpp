#include "Singleton.h"

Singleton::Singleton() {
	this->IdCounter = 0;
}

Singleton* Singleton::getInstance() {
	if (!instance) instance = new Singleton;
	return instance;
}

int Singleton::getId() {
	return ++IdCounter;
}