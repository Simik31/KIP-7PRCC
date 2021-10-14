#ifndef Tucnak_h
#define Tucnak_h

#include "Zvire.h"

class Tucnak : public Zvire
{
public:
	Tucnak(int i);
	~Tucnak();
	virtual std::string Nakrmit();
};

#endif