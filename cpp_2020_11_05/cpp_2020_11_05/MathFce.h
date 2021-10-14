#ifndef MATHFCE
#define MATHFCE

#include <iostream>

class MathFce
{
public:
	static int absolute(int n);
	static double power(int a, int b);

	static int add(int a, int b);
	static int subtract(int a, int b);
	static int multiply(int a, int b);
	static double devide(int a, int b);
	static int intDevide(int a, int b);
	static double mod(int a, int b);
};

#endif