#include "coordinate.h"

Coordinate::Coordinate(double x, double y) {
	this->x = x;
	this->y = y;
}

Coordinate Coordinate::operator+(Coordinate c) {
	double newX = this->x + c.getX();
	double newY = this->y + c.getY();
	Coordinate result(newX, newY);
	return (result);
}

Coordinate Coordinate::operator-(Coordinate c) {
	double newX = this->x - c.getX();
	double newY = this->y - c.getY();
	Coordinate result(newX, newY);
	return (result);
}

double Coordinate::getX() {
	return (this->x);
}

double Coordinate::getY() {
	return (this->y);
}