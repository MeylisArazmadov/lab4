#include "fraction.h"

Fraction::Fraction(int num, int denom) :numerator(num), denomirator(denom) {}

Fraction Fraction::operator+(const Fraction& other)const {

	int commonDenomirator = denomirator * other.denomirator;
	int newNumerator = (numerator * other.denomirator) + (other.numerator + denomirator);

	return Fraction(newNumerator, commonDenomirator);
}

Fraction Fraction::operator-(const Fraction& other)const {
	
	int commonDenomirator = denomirator * other.denomirator;
	int newNumerator = (numerator * other.denomirator) - (other.numerator * denomirator);

	return Fraction(newNumerator, commonDenomirator);
}

Fraction Fraction::operator*(const Fraction& other)const {
	
	int newNumerator = numerator * other.numerator;
	int newDenominator = denomirator * other.denomirator;

	return Fraction(newNumerator, newDenominator);
}

string Fraction::toString() const {
	ostringstream oss;
	oss << numerator << "/" << denomirator;
	return oss.str();
}