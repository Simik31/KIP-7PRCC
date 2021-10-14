#ifndef Person_h
#define Persin_h

#include "Address.h"
#include "Singleton.h"

class Person
{
private:
	int id;
	string Name;
	string Surname;
	int age;
	Address* address;
public:
	Person();
	Person(string Name, string Surname, int age);
	~Person();
	int getId();
	void setName(string name);
	string getName();
	void setSurname(string surname);
	string getSurname();
	void setAge(int age);
	int getAge();
	void setAddress(Address* address);
	Address* getAddress();
	string toString();
	void print();
};

#endif