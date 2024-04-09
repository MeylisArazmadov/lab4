#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "lib.h"

class Triangle {
private:
	double side1;
	double side2;
	double side3;

public:
	Triangle(double s1, double s2, double s3);
	double getSide1() const;
	double getSide2() const;
	double getSide3() const;
	double getPerimeter() const;
	double getArea() const;
	void move(double dx, double dy);
	void rotate(double angle);
	string toString() const;
};

#endif
