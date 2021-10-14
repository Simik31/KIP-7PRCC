#ifndef Panda_h
#define Panda_h

#include "Zvire.h"

class Panda : public Zvire
{
public:
	Panda(int i);
	~Panda();
	virtual std::string Nakrmit();
};

#endif