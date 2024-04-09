#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "lib.h"

class Rectangle {
private:
	double width;
	double height;

public:
	Rectangle(double w, double h);
	double getWidth()const;
	double getHeight()const;
	double getPerimeter()const;
	double getArea()const;
	void move(double dx, double dy);
	void rotate(double angle);
	string toString()const;
};

#endif
