#pragma once

#ifndef My
#define My

#include <stdio.h>

#define PI 3.14159265359

#define MAX(a, b) (((a) > (b)) ? (a) : (b))
#define OBVOD_KRUHU(r) (2 * PI * (r))
#define OBJEM_KVADRU(a, b, c) ((a) * (b) * (c))

double max(double a, double b);
double obvodKruhu(double r);
double objemKvadru(double a, double b, double c);

#endif