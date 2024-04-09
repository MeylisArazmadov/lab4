#include "trapezoid.h"

Trapezoid::Trapezoid(double b1, double b2, double h, double s1, double s2, double a) : base1(b1), base2(b2), height(h), side1(s1), side2(s2), angle(a) {}

double Trapezoid::getBase1() const {
	return base1;
}

double Trapezoid::getBase2() const {
	return base2;
}

double Trapezoid::getHeight() const {
	return height;
}

double Trapezoid::getSide1() const {
	return side1;
}

double Trapezoid::getSide2() const {
	return side2;
}

double Trapezoid::getAngle() const {
	return angle;
}

double Trapezoid::getPerimeter() const {
	return base1 + base2 + side1 + side2;
}

double Trapezoid::getArea() const {
	return (base1 + base2) * height / 2;
}

void Trapezoid::move(double dx, double dy) {
	base1 += dx;
	base2 += dx;
	height += dy;
	side1 += dy;
	side2 += dy;
}

void Trapezoid::rotate(double angle, double x1, double x2, double x3, double x4, double y1, double y2, double y3, double y4) {
	double radians = angle*(M_PI * 180);

	double cosAngle = cos(radians);
	double sinAngle = sin(radians); 

	double centerX = (base1 + base2) / 2;
	double centerY = height / 2;

	double relX1 = x1 - centerX;
	double relY1 = y1 - centerY;
	double relX2 = x2 - centerX;
	double relY2 = y2 - centerY;
	double relX3 = x3 - centerX;
	double relY3 = y3 - centerY;
	double relX4 = x4 - centerX;
	double relY4 = y4 - centerY;

	double newX1 = relX1 * cosAngle - relY1 * sinAngle + centerX;
	double newY1 = relX1 * sinAngle - relY1 * cosAngle + centerY;

	double newX2 = relX2 * cosAngle - relY2 * sinAngle + centerX;
	double newY2 = relX2 * sinAngle - relY2 * cosAngle + centerY;

	double newX3 = relX3 * cosAngle - relY3 * sinAngle + centerX;
	double newY3 = relX3 * sinAngle - relY3 * cosAngle + centerY;

	double newX4 = relX4 * cosAngle - relY4 * sinAngle + centerX;
	double newY4 = relX4 * sinAngle - relY4 * cosAngle + centerY;

	x1 = newX1;
	y1 = newY1;

	x2 = newX2;
	y2 = newY2;

	x3 = newX3;
	y3 = newY3;

	x4 = newX4;
	y4 = newY4;
}

string Trapezoid::toString() const {
	ostringstream oss;
	oss << "Trapezoid: base1 = " << base1 << ", base2 = " << base2 << ", height = " << height << ", side1 = " << side1 << ", side2 = " << side2 << ", angle = " << angle;
	return oss.str();
}