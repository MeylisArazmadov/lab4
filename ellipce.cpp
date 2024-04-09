#include "ellipce.h"

Ellipce::Ellipce(double a, double b, double theta) :semiMajorAxis(a), semiMinorAxis(b), angle(theta) {}

double Ellipce::getSemiMajorAxis() const {
	return semiMajorAxis;
}

double Ellipce::getSemiMinorAxis() const {
	return semiMinorAxis;
}

double Ellipce::getAngle() const {
	return angle;
}

double Ellipce::getPerimeter() const {
	double h = ((semiMajorAxis - semiMinorAxis) * (semiMajorAxis - semiMinorAxis)) / ((semiMajorAxis + semiMinorAxis) * (semiMajorAxis + semiMinorAxis));
	return M_PI * (semiMajorAxis + semiMinorAxis) * (1 + (3 * h) / (10 + sqrt(4 - 3 * h)));
}

double Ellipce::getArea() const {
	return M_PI * semiMajorAxis * semiMinorAxis;
}

void Ellipce::move(double dx, double dy) {
	semiMajorAxis += dx;
	semiMinorAxis += dy;
}

void Ellipce::rotate(double angle) {
	double radians = angle * (M_PI * 180);

	double cosAngle = cos(radians);
	double sinAngle = sin(radians);

	this->angle += angle;
}

string Ellipce::toString() const {
	ostringstream oss;
	oss << "Ellipce: Semi-Major axis = " << semiMajorAxis << ", Semi-Minor axis = " << semiMinorAxis << ", angle = " << angle;
	return oss.str();
}