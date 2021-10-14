#ifndef Hroch_h
#define Hroch_h

#include "Zvire.h"

class Hroch : public Zvire
{
public:
	Hroch(int i);
	~Hroch();
	virtual std::string Nakrmit();
};

#endif