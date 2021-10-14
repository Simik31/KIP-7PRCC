#ifndef Zirafa_h
#define Zirafa_h

#include "Zvire.h"

class Zirafa : public Zvire
{
public:
	Zirafa(int i);
	~Zirafa();
	virtual std::string Nakrmit();
};

#endif