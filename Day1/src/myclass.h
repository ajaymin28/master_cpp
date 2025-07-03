#include <iostream>

using namespace std;

class vector1 {
public:
	double start_x;
	double start_y;
	double end_x;
	double end_y;

	// Methods
	void print();
};

class point {
private:
	double x;
	double y;
public:
	void update(double new_x, double new_y);
	void print();
	double getX();
	double getY();
};

class vector {
private:
	point start;
	point end;
public:
	vector();
	vector(double x1, double y1, double x2, double y2);
	// Copy Constructor 
	vector(vector& v);  // gets called when vector v = v2;

	// methods
	void update(double x1, double y1, double x2, double y2);
	void print();
};