#ifndef RHOMBUS_H
#define RHOMBUS_H

#include "lib.h"

class Rhombus {
private:
	double side;
	double angle;
public:
	Rhombus(double s, double a);
	double getSide() const;
	double getAngle() const;
	double getPerimeter() const;
	double getArea() const;
	void move(double dx, double dy);
	void rotate(double angle);
	string toString() const;
};

#endif
