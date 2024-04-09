#include "matrix.h"

Matrix::Matrix(int numRows, int numCols) :rows(numRows), cols(numCols) {
	data.resize(rows, vector<double>(cols, 0));
}

Matrix::Matrix(const vector<vector<double>>& matrixData) : data(matrixData) {
	rows = matrixData.size();
	cols = (rows > 0) ? matrixData[0].size() : 0;
}

Matrix Matrix::operator+(const Matrix& other) const {
	if (rows != other.rows || cols != other.cols) {
		return Matrix(0, 0);
	}

	Matrix result(rows, cols);
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			result.data[i][j] = data[i][j] + other.data[i][j];
		}
	}
	return result;
}

Matrix Matrix::operator-(const Matrix& other) const {
	if (rows != other.rows || cols != other.cols) {
		return Matrix(0, 0);
	}

	Matrix result(rows, cols);
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			result.data[i][j] = data[i][j] - other.data[i][j];
		}
	}
	return result;
}

Matrix Matrix::operator*(const Matrix& other) const {
	if (cols != other.rows) {
		return Matrix(0, 0);
	}

	Matrix result(rows, other.cols);
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < other.cols; ++i) {
			for (int k = 0; k < cols; ++k) {
				result.data[i][j] += data[i][k] * other.data[k][j];
			}
		}
	}
	return result;
}

Matrix Matrix::operator*(double scalar) const {
	Matrix result(rows, cols);
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			result.data[i][j] = data[i][j] * scalar;
		}
	}
	return result;

}

string Matrix::toString() const {
	string result;
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			result += to_string(data[i][j]) + " ";
		}
	}
	return result;
}