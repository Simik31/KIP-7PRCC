#include "Address.h"

Address::Address() {
	vector<string> streets { "Abby Park Street", "Adelaide Avenue", "Airplane Avenue", "Airport Avenue", "Airport Street", "Andreas Avenue", "Arthur Street", "Auburn Avenue", "Barn Street", "Bay Avenue", "Beatles Avenue", "Belby Road", "Bus Avenue" };
	vector<string> cities { "Tokyo", "Delhi", "Shanghai", "Sao Paulo", "Mexico City", "Cairo", "Mumbai", "Beijing", "Dhaka", "Osaka", "New York City", "Karachi", "Buenos Aires", "Chongqing", "Istanbul" };

	this->setStreet(streets[rand() % streets.size()]);
	this->setNumber(rand() % 150);
	this->setCity(cities[rand() % cities.size()]);
	this->setZip(10000 + rand() % 90000);
}

Address::Address(string street, int number, string city, int zip) {
	this->setStreet(street);
	this->setNumber(number);
	this->setCity(city);
	this->setZip(zip);
}

void Address::setStreet(string street) {
	this->street = street;
}

string Address::getStreet() {
	return street;
}

void Address::setNumber(int number) {
	this->number = number;
}

int Address::getNumber() {
	return number;
}

void Address::setCity(string city) {
	this->city = city;
}

string Address::getCity() {
	return city;
}

void Address::setZip(int zip) {
	this->zip = zip;
}

int Address::getZip() {
	return zip;
}

string Address::toString() {
	return getStreet() + " " + to_string(getNumber()) + ", " + getCity() + " " + to_string(getZip());
}

void Address::print() {
	cout << toString() << endl;
}