#include "Student.h"

#define PERSON_COUNT 5

Singleton* Singleton::instance;

int main()
{
	srand(time(NULL));

	Student s("Martin", "Simara", 20, "University of Ostrava", "Software systems");

	s.print();

	s.setName("Vojtech");
	s.setSurname("Tomes");
	s.setAge(21);
	s.setUniversity("VSB-TUO");
	s.setFieldOfStudy("Teaching");

	Address* newAddress = new Address();
	newAddress->setStreet("Televizni");
	newAddress->setNumber(25);
	newAddress->setCity("Ostrava");
	newAddress->setZip(72528);

	s.setAddress(newAddress);

	cout << endl << endl;

	cout << "ID: " << s.getId() << endl;
	cout << "Name: " << s.getName() << endl;
	cout << "Surname: " << s.getSurname() << endl;
	cout << "Age: " << s.getAge() << endl;
	cout << "Address: " << s.getAddress()->toString() << endl;
	cout << "University: " << s.getUniversity() << endl;
	cout << "Field of study: " << s.getFieldOfStudy() << endl;

	vector<Person*> family;
	vector<Student*> students;
	family.push_back(new Person("David", "Simara", 21));
	family.push_back(new Person("Blanka", "Fucekova", 52));
	family.push_back(new Person("Petr", "Simara", 49));
	family.push_back(new Person("Martin", "Simara", 20));
	family.push_back(new Person("Radim", "Simara", 19));

	vector<int> toDelete;
	
	for (int i = 0; i < family.size(); i++) {
		if (family[i]->getAge() < 21) {
			students.push_back(new Student(family[i]->getName(), family[i]->getSurname(), family[i]->getAge()));
			students[students.size() - 1]->setAddress(family[i]->getAddress());
			students[students.size() - 1]->setUniversity("OSU");
			students[students.size() - 1]->setFieldOfStudy("Software systems");
			toDelete.push_back(i);
		}
	}

	for (int i = toDelete.size() - 1; i >= 0; i--)
		family.erase(family.begin() + toDelete[i], family.begin() + toDelete[i] + 1);

	cout << "Family - non students: " << endl;
	for (int i = 0; i < family.size(); i++)
		family[i]->print();

	cout << "Students: " << endl;
	for (int i = 0; i < students.size(); i++)
		students[i]->print();

	return 0;
}