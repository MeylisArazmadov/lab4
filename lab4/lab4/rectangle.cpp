#include "rectangle.h"

Rectangle::Rectangle(double w, double h) :width(w), height(h) {}

double Rectangle::getWidth() const {
	return width;
}

double Rectangle::getHeight() const {
	return height;
}

double Rectangle::getPerimeter() const{
	return 2 * (width + height);
}

double Rectangle::getArea() const {
	return width * height;
}

void Rectangle::move(double dx, double dy) {
	width += dx;
	height += dy;
}

void Rectangle::rotate(double angle) {
	double radians = angle * (M_PI / 180);

	double cosAngle = cos(radians);
	double sinAngle = sin(radians);

	double newWidth = width * fabs(cosAngle) + height * fabs(sinAngle);
	double newHeight = width * fabs(sinAngle) + height * fabs(cosAngle);

	width = newWidth;
	height = newHeight;
}

string Rectangle::toString() const {
	ostringstream oss;
	oss << "rectangle: width = " << width << ", height = " << height;
	return oss.str();
}