#ifndef Pes_h
#define Pes_h

#include "Zvire.h"

class Pes : public Zvire
{
public:
	Pes(int i);
	~Pes();
	virtual std::string Nakrmit();
};

#endif