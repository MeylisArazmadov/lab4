#ifndef MATRIX_H
#define MATRIX_H

#include "lib.h"

class Matrix {
private:
	vector<vector<double>> data;
	int rows;
	int cols;

public:
	Matrix(int numRows, int numCols);
	Matrix(const vector<vector<double>>& matrixData);
	Matrix operator+(const Matrix& other) const;
	Matrix operator-(const Matrix& other) const;
	Matrix operator*(const Matrix& other) const;
	Matrix operator*(double scalar) const;
	string toString() const;
};


#endif
