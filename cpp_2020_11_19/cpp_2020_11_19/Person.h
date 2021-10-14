#ifndef Person_h
#define Person_h

#include "Address.h"
#include <iostream>
#include <stdio.h>

class Person
{
public:
	Person(int id);
	~Person();
	string toString() const;
	void setName(string name);
	string getName() const;
	void setSurname(string name);
	string getSurname() const;
	int getId() const;
	Address* address;
private:
	void setId(int id);
	string name;
	string surname;
	int id;
};

#endif
