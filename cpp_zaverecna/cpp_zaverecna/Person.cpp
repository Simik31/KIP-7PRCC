#include "Person.h"
#include <sstream>

Person::Person() {

	this->id = Singleton::getInstance()->getId();
	this->Name = "";
	this->Surname = "";
	this->age = 0;
	this->address = new Address();
}

Person::Person(string Name, string Surname, int age) {
	this->id = Singleton::getInstance()->getId();
	this->Name = Name;
	this->Surname = Surname;
	this->age = age;
	this->address = new Address();
}

Person::~Person() {
	delete address;
}

int Person::getId() {
	return id;
}

void Person::setName(string name) {
	this->Name = name;
}

string Person::getName() {
	return Name;
}

void Person::setSurname(string surname) {
	this->Surname = surname;
}

string Person::getSurname() {
	return Surname;
}

void Person::setAge(int age) {
	this->age = age;
}

int Person::getAge() {
	return age;
}

void Person::setAddress(Address* address) {
	this->address = address;
}

Address* Person::getAddress() {
	return address;
}

string Person::toString() {
	return "Person:\n\tID:\t\t" + to_string(getId()) + "\n\tName:\t\t" + getName() + "\n\tSurname:\t" + getSurname() + "\n\tAge:\t\t" + to_string(getAge()) + "\n\tAddress:\t" + address->toString();
}

void Person::print() {
	cout << toString() << endl;
}