#include "polynomial.h"

Polynomial::Polynomial(const vector<double>& coeffs) :coefficients(coeffs), degree(coeffs.size() - 1) {}

Polynomial Polynomial::operator+(const Polynomial& other)const {
	int newDegree = max(degree, other.degree);
	vector<double> resultCoeffs(newDegree + 1, 0);

	for (int i = 0; i <= degree; ++i) {
		resultCoeffs[i] += coefficients[i];
	}
	for (int i = 0; i <= other.degree; ++i) {
		resultCoeffs[i] += other.coefficients[i];
	}

	return Polynomial(resultCoeffs);
}

Polynomial Polynomial::operator-(const Polynomial& other)const {
	int newDegree = max(degree, other.degree);
	vector<double> resultCoeffs(newDegree + 1, 0);

	for (int i = 0; i <= degree; ++i) {
		resultCoeffs[i] += coefficients[i];
	}
	for (int i = 0; i <= other.degree; ++i) {
		resultCoeffs[i] -= other.coefficients[i];
	}

	return Polynomial(resultCoeffs);
}

Polynomial Polynomial::operator*(const Polynomial& other)const {
	int newDegree = degree + other.degree;
	vector<double> resultCoeffs(newDegree + 1, 0);

	for (int i = 0; i <= degree; ++i) {
		for (int j = 0; j <= other.degree; ++j) {
			resultCoeffs[i + j] += coefficients[i] * other.coefficients[j];
		}
	}

	return Polynomial(resultCoeffs);
}

string Polynomial::toString() const {
	ostringstream oss;
	for (int i = degree; i >= 0; --i) {
		if (coefficients[i] != 0.0) {
			if (i < degree)
				oss << "+";


			if (coefficients[i] != 1.0)
				oss << coefficients[i];


			if (i > 1)
				oss << "x" << i;

			else if (i == 1)
				oss << "x";

			else
				oss << coefficients[i];
		}
	}
	return oss.str();
}