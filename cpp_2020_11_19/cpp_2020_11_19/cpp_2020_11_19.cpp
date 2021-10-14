#include <iostream>
#include "Student.h"

int main()
{
	Student s1(0);
	s1.setName("Martin");
	s1.setSurname("Simara");
	s1.address->setStreet("Hlohova");
	s1.address->setNumber(141);
	s1.address->setCity("Ostrava-Lhotka");
	s1.address->setPostCode(72528);
	s1.setAverage(2.35);

	cout << s1.toString() << endl;

	Student s2(1);
	s2.setName("Vojtech");
	s2.setSurname("Tomes");
	s2.address->setStreet("Televizni");
	s2.address->setNumber(52);
	s2.address->setCity("Ostrava-Lhotka");
	s2.address->setPostCode(72528);
	s2.setAverage(1.65);

	cout << s2.toString() << endl;
}
