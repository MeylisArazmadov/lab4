#ifndef ELLIPCE_H
#define ELLIPCE_H
#include "lib.h"

class Ellipce {
private:
	double semiMajorAxis;
	double semiMinorAxis;
	double angle;

public:
	Ellipce(double a, double b, double theta);
	double getSemiMajorAxis() const;
	double getSemiMinorAxis() const;
	double getAngle() const;
	double getPerimeter() const;
	double getArea() const;
	void move(double dx, double dy);
	void rotate(double angle);
	string toString() const;
};

#endif