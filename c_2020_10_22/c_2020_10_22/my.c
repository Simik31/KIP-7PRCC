#include "my.h"

complex add(complex a, complex b)
{
	complex r;
	r.real = a.real + b.real;
	r.imag = a.imag + b.imag;
	return r;
}

complex subtract(complex a, complex b)
{
	complex r;
	r.real = a.real - b.real;
	r.imag = a.imag - b.imag;
	return r;
}