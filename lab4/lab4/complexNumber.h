#ifndef COMPLEXNUMBER_H
#define COMPLEXNUMBER_H

#include "lib.h"

class ComplexNumber {
private:
	double real;
	double imaginary;

public:
	ComplexNumber(double realPart, double imaginaryPart);
	ComplexNumber operator+(const ComplexNumber& other) const;
	ComplexNumber operator-(const ComplexNumber& other) const;
	ComplexNumber operator*(const ComplexNumber& other) const;
	string toString() const;
};

#endif
