#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H

#include "lib.h"

class Polynomial {
private:
	vector<double> coefficients;
	int degree;

public:
	Polynomial(const vector<double>& coeffs);
	Polynomial operator+(const Polynomial& other) const;
	Polynomial operator-(const Polynomial& other) const;
	Polynomial operator*(const Polynomial& other) const;
	string toString() const;
};

#endif
