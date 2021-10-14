#ifndef Krajta_h
#define Krajta_h

#include "Zvire.h"

class Krajta : public Zvire
{
public:
	Krajta(int i);
	~Krajta();
	virtual std::string Nakrmit();
};

#endif