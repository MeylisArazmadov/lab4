#include "complexNumber.h"

ComplexNumber::ComplexNumber(double realPart, double imaginaryPart) :real(realPart), imaginary(imaginaryPart) {}

ComplexNumber ComplexNumber::operator+(const ComplexNumber& other) const {
	
	double newReal = real + other.real;
	double newImaginary = imaginary + other.imaginary;

	return ComplexNumber(newReal, newImaginary);
}

ComplexNumber ComplexNumber::operator-(const ComplexNumber& other) const {
	
	double newReal = real - other.real;
	double newImaginary = imaginary - other.imaginary;

	return ComplexNumber(newReal, newImaginary);
}

ComplexNumber ComplexNumber::operator*(const ComplexNumber& other) const {

	double newReal = (real * other.real) - (imaginary * other.imaginary);
	double newImaginary = (real * other.real) + (imaginary * other.imaginary);

	return ComplexNumber(newReal, newImaginary);
}

string ComplexNumber::toString() const {
	ostringstream oss;
	oss << real;
	if (imaginary >= 0)
		oss << " + " << imaginary << "i";
	else
		oss << " - " << imaginary << "i";
	
	return oss.str();
}