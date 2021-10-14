#ifndef MY
#define MY

#include <iostream>

class My
{
private:
	int id;

	static int pocetInstanci;

public:
	My(int id);
	~My();

	int getId() const;

	static int GetCountOfInstances();
};

#endif
