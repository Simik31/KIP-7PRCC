#include "Address.h"

Address::Address() {

}

Address::Address(Address &address) {
	setStreet(address.getStreet());
	setNumber(address.getNumber());
	setCity(address.getCity());
	setPostCode(address.getPostCode());
}

string Address::toString() const {
	return getStreet() + " " + to_string(getNumber()) + ", " + getCity() + " " + to_string(getPostCode());
}

void Address::setStreet(string street) {
	this->street = street;
}

string Address::getStreet() const {
	return street;
}

void Address::setNumber(int number) {
	this->number = number;
}

int Address::getNumber() const {
	return number;
}

void Address::setCity(string city) {
	this->city = city;
}

string Address::getCity() const {
	return city;
}

void Address::setPostCode(int postCode) {
	this->postCode = postCode;
}

int Address::getPostCode() const {
	return postCode;
}
