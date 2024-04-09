#include "rhombus.h"

Rhombus::Rhombus(double s, double a) :side(s), angle(a) {}

double Rhombus::getSide() const {
	return side;
}

double Rhombus::getAngle() const {
	return angle;
}

double Rhombus::getPerimeter() const {
	return 4 * side;
}

double Rhombus::getArea() const {
	return side * side * sin(angle);
}

void Rhombus::move(double dx, double dy) {
	side += dx;
	side += dy;
}

void Rhombus::rotate(double angle) {
	double radians = angle * (M_PI / 180);

	double cosAngle = cos(radians);
	double sinAngle = sin(radians);

	double newSide = side * cosAngle;
	double newAngle = angle + this->angle;

	side = newSide;
	this->angle = newAngle;
}

string Rhombus::toString() const {
	ostringstream oss;
	oss << "Rhombus: side = " << side << ", angle = " << angle;
	return oss.str();
}