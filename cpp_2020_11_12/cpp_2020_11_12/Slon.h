#ifndef Slon_h
#define Slon_h

#include "Zvire.h"

class Slon : public Zvire
{
public:
	Slon(int i);
	~Slon();
	virtual std::string Nakrmit();
};

#endif