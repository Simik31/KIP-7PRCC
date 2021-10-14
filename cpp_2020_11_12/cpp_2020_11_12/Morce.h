#ifndef Morce_h
#define Morce_h

#include "Zvire.h"

class Morce : public Zvire
{
public:
	Morce(int i);
	~Morce();
	virtual std::string Nakrmit();
};

#endif