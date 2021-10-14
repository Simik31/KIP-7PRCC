#ifndef Class_h
#define Class_h

#include "Student.h"
#include <vector>

class Class
{
public:
	Class();
	~Class();
	int getIndexOfStudent(string surname);
	string toString() const;
	void addStudent(Student student);
	double getAverageOfClass()const;
	string getNameOfClass();
	void setNameOfClass(string nameOfClass) const;
private:
	vector<Student*> students;
	string nameOfClass;
};

#endif