#ifndef Student_h
#define Student_h

#include "Person.h"

class Student : public Person
{
private:
	string university;
	string fieldOfStudy;
public:
	Student();
	Student(string Name, string Surname, int age);
	Student(string Name, string Surname, int age, string university, string fieldOfStudy);
	void setUniversity(string university);
	string getUniversity();
	void setFieldOfStudy(string fieldOfStudy);
	string getFieldOfStudy();
	string toString();
	void print();
};

#endif