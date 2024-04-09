#ifndef FRACTION_H
#define FRACTION_H

#include "lib.h"

class Fraction {
private:
	int numerator;
	int denomirator;

public:
	Fraction(int num, int denom);
	Fraction operator+(const Fraction& other) const;
	Fraction operator-(const Fraction& other) const;
	Fraction operator*(const Fraction& other) const;
	string toString() const;
};

#endif
