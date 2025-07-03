#include "myclass.h"

void point::print() {
	cout << "x: " << x << ", y: " << y << endl;
}

void point::update(double new_x, double new_y) {
	x = new_x;
	y = new_y;
}

double point::getX() {
	return x;
}

double point::getY() {
	return y;
}

void vector1::print() {
	cout << "start x: " << start_x << ", start y: " << start_y << endl;
	cout << "end x: " << end_x << ", end y: " << end_y << endl;
}

vector::vector() {
	start.update(0.0, 0.0);
	end.update(0.0, 0.0);
}

vector::vector(double x1, double y1, double x2, double y2) {
	start.update(x1, y1);
	end.update(x2, y2);
	//this->update(x1, y1, x2, y2);
}

vector::vector(vector& v) {
	start.update(v.end.getX(), v.end.getY());
	end.update(v.start.getX(), v.start.getY());
}

void vector::update(double x1, double y1, double x2, double y2) {
	start.update(x1, y1);
	end.update(x2, y2);
}

void vector::print() {
	start.print();
	end.print();
}