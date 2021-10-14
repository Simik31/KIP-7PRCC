#include "MathFce.h"

int MathFce::absolute(int n) {
	return (n > 0) ? n : n * (-1);
}

int MathFce::add(int a, int b) {
	return a + b;
}

int MathFce::subtract(int a, int b) {
	return a - b;
}

int MathFce::multiply(int a, int b) {
	return a * b;
}

double MathFce::devide(int a, int b) {
	return a * 1.0 / b;
}

int MathFce::intDevide(int a, int b) {
	return a / b;
}

double MathFce::mod(int a, int b) {
	return a % b;
}

double MathFce::power(int a, int b) {
	double ret = 1;
	for (int i = 0; i < absolute(b); i++) ret *= a;
	return b > 0 ? ret : 1 / ret;
}
