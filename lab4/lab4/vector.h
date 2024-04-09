#ifndef VECTOR_H
#define VECTOR_H

#include "lib.h"

class Vector {
private:
	vector<double> data;
	int size;

public:
	Vector(const vector<double>& values);
	Vector operator+(const Vector& other)const;
	Vector operator-(const Vector& other)const;
	Vector operator*(double scalar)const;
	string toString() const;
};

#endif
