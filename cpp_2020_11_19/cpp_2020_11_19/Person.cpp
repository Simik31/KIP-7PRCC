#include "Person.h"

Person::Person(int id) {
	setId(id);
	address = new Address();
}

Person::~Person() {
	delete address;
}

string Person::toString() const {
	return "Person ID " + to_string(getId()) + ": " + getName() + " " + getSurname() + "\nAdresa: " + address->toString();
}

void Person::setName(string name) {
	this->name = name;
}

string Person::getName() const {
	return name;
}

void Person::setSurname(string surname) {
	this->surname = surname;
}

string Person::getSurname() const {
	return surname;
}

void Person::setId(int id) {
	this->id = id;
}

int Person::getId() const {
	return id;
}
