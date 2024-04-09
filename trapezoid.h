#ifndef TRAPEZOID_H
#define TRAPEZOID_H

#include "lib.h"

class Trapezoid {
private:
	double base1;
	double base2;
	double height;
	double side1;
	double side2;
	double angle;

	double x1;
	double x2;
	double x3;
	double x4;
	double y1;
	double y2;
	double y3;
	double y4;

public:
	Trapezoid(double b1, double b2, double h, double s1, double s2, double a);
	double getBase1() const;
	double getBase2() const;
	double getHeight() const;
	double getSide1() const;
	double getSide2() const;
	double getAngle() const;
	double getPerimeter() const;
	double getArea() const;
	void move(double dx, double dy);
	void rotate(double angle, double x1, double x2, double x3, double x4, double y1, double y2, double y3, double y4);
	string toString() const;
};

#endif
