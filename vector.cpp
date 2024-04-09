#include "vector.h"

Vector::Vector(const vector<double>& values) : data(values), size(values.size()) {}

Vector Vector::operator+(const Vector& other) const {
	
	if (size != other.size) {
		return Vector(vector<double>());
	}

	vector<double> resultData(size);
	for (int i = 0; i < size; ++i) {
		resultData[i] = data[i] + other.data[i];
	}

	return Vector(resultData);
}

Vector Vector::operator-(const Vector& other) const {
	
	if (size != other.size) {
		return Vector(vector<double>());
	}

	vector<double> resultData(size);
	for (int i = 0; i < size; ++i) {
		resultData[i] = data[i] - other.data[i];
	}

	return Vector(resultData);
}

Vector Vector::operator*(double scalar) const {

	vector<double> resultData(size);
	for (int i = 0; i < size; ++i) {
		resultData[i] = data[i] * scalar;
	}

	return Vector(resultData);
}

string Vector::toString() const {
	string result = "[";
	for (int i = 0; i < size; ++i) {
		result += to_string(data[i]);
		if (i < size - 1) {
			result += ", ";
		}
	}
	result += "]";
	return result;
}