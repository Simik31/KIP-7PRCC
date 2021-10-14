#ifndef Tygr_h
#define Tygr_h

#include "Zvire.h"

class Tygr : public Zvire
{
public:
	Tygr(int i);
	~Tygr();
	virtual std::string Nakrmit();
};

#endif