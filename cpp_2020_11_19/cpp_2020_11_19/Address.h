#ifndef Address_h
#define Address_h

#include <iostream>
#include <stdio.h>
#include <sstream>

using namespace std;

class Address
{
public:
	Address();
	Address(Address &address);
	string toString() const;
	void setStreet(string street);
	string getStreet() const;
	void setNumber(int number);
	int getNumber() const;
	void setCity(string city);
	string getCity() const;
	void setPostCode(int postCode);
	int getPostCode() const;
private:
	string street;
	int number;
	string city;
	int postCode;
};

#endif