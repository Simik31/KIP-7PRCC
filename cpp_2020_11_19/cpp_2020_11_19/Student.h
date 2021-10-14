#ifndef Student_h
#define Student_h

#include "Person.h"

class Student : public Person
{
public:
	Student(int id);
	void setAverage(double average);
	double getAverage() const;
	string toString() const;
private:
	double average;
};

#endif