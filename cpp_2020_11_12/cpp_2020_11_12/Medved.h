#ifndef Medved_h
#define Medved_h

#include "Zvire.h"

class Medved : public Zvire
{
public:
	Medved(int i);
	~Medved();
	virtual std::string Nakrmit();
};

#endif