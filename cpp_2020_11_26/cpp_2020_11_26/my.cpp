#include "my.h"

void My::V() {
	vector<int> vector_int;
	vector_int.push_back(11);
	vector_int.push_back(22);
	vector_int.push_back(33);
	copy(vector_int.begin(), vector_int.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	vector<double> vector_double;
	vector_double.push_back(1.1);
	vector_double.push_back(2.2);
	vector_double.push_back(3.3);
	copy(vector_double.begin(), vector_double.end(), ostream_iterator<double>(cout, " "));
	cout << endl;

	vector<int> vector_int_2;
	for (int i = 1; i <= 20; i++) {
		vector_int_2.push_back(i);
		cout << "i: "
			 << i
			 << " | size: "
			 << vector_int_2.size()
			 << " | capacity: "
			 << vector_int_2.capacity()
			 << endl;
	}
	vector_int_2.insert(find(vector_int_2.begin(), vector_int_2.end(), 16), 777);
	copy(vector_int_2.begin(), vector_int_2.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
}

void My::L() {
	list<int> list_int_1, list_int_2;
	for (int i = 1; i <= 20; i++) {
		list_int_1.push_back(i);
		list_int_2.push_front(i);
	}
	cout << "list_int_1: " << endl;
	copy(list_int_1.begin(), list_int_1.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	cout << "list_int_2: " << endl;
	copy(list_int_2.begin(), list_int_2.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
}