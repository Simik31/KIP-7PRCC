#pragma once
#pragma warning(disable : 4996)

#ifndef MY
#define MY

#include <stdio.h>
#include <string.h>

typedef struct
{
	double real, imag;
} complex;

complex add(complex a, complex b);
complex subtract(complex a, complex b);

#endif