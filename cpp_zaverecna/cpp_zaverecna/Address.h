#ifndef Address_h
#define Address_h

#include <iostream>
#include <sstream>
#include <vector>
#include <time.h>

using namespace std;

class Address
{
private:
	string street;
	int number;
	string city;
	int zip;

public:
	Address();
	Address(string street, int number, string city, int zip);
	void setStreet(string street);
	string getStreet();
	void setNumber(int number);
	int getNumber();
	void setCity(string city);
	string getCity();
	void setZip(int zip);
	int getZip();
	string toString();
	void print();
};

#endif