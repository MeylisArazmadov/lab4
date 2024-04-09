#include "triangle.h"

Triangle::Triangle(double s1, double s2, double s3) :side1(s1), side2(s2), side3(s3) {}

double Triangle::getSide1() const {
	return side1;
}

double Triangle::getSide2() const {
	return side2;
}

double Triangle::getSide3() const {
	return side3;
}

double Triangle::getPerimeter() const {
	return side1 + side2 + side3;
}

double Triangle::getArea() const {
	double s = (side1 + side2 + side3) / 2;
	return sqrt(s * (s - side1) * (s - side2) * (s - side3));
}

void Triangle::move(double dx, double dy) {
	side1 += dx;
	side2 += dx;
	side3 += dx;

	side1 += dy;
	side2 += dy;
	side3 += dy;
}

void Triangle::rotate(double angle) {
	double radians = angle * (M_PI / 180);
	double cosAngle = cos(radians);
	double sinAngle = sin(radians);

	double newX1 = side1 * cosAngle - side2 * sinAngle;
	double newY1 = side1 * sinAngle - side2 * cosAngle;

	double newX2 = side2 * cosAngle - side3 * sinAngle;
	double newY2 = side2 * sinAngle - side3 * cosAngle;

	double newX3 = side3 * cosAngle - side1 * sinAngle;
	double newY3 = side3 * sinAngle - side1 * cosAngle;

	side1 = newX1;
	side2 = newY1;

	side2 = newX2;
	side3 = newY2;

	side3 = newX3;
	side1 = newY3;
}

string Triangle::toString() const {
	ostringstream oss;
	oss << "Triangle side1 = " << side1 << ", side2 = " << side2 << ", side3 = " << side3;
	return oss.str();
}