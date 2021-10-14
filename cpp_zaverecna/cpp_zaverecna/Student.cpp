#include "Student.h"

Student::Student() : Person() {
	setUniversity("");
	setFieldOfStudy("");
}

Student::Student(string Name, string Surname, int age) : Person(Name, Surname, age) {
	setUniversity("");
	setFieldOfStudy("");
}

Student::Student(string Name, string Surname, int age, string university, string fieldOfStudy) : Person(Name, Surname, age) {
	setUniversity(university);
	setFieldOfStudy(fieldOfStudy);
}

void Student::setUniversity(string university) {
	this->university = university;
}

string Student::getUniversity() {
	return university;
}

void Student::setFieldOfStudy(string fieldOfStudy) {
	this->fieldOfStudy = fieldOfStudy;
}

string Student::getFieldOfStudy() {
	return fieldOfStudy;
}

string Student::toString() {
	return Person::toString() + "\n\tUniversity:\t" + getUniversity() + "\n\tField of study: " +  getFieldOfStudy();
}

void Student::print() {
	cout << toString() << endl;
}