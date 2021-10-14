#ifndef Animal_h
#define Animal_h
#include <iostream>
#include <stdio.h>
#include <sstream>

class Zvire
{
private:
	int id;
public:
	Zvire(int id);
	virtual ~Zvire();

	int dejID() const;
	virtual std::string Nakrmit() = 0;
};

#endif