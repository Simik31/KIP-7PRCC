#include "Student.h"

Student::Student(int id) : Person(id) {

}

void Student::setAverage(double average) {
	this->average = average;
}

double Student::getAverage() const {
	return average;
}

string Student::toString() const {
	return Person::toString() + "\nStudent average: " + to_string(average);
}
