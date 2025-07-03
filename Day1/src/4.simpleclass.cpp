#include <iostream>
#include "myclass.h"
using namespace std;

void print_vector1(vector1 v) {
	cout << "start x: " << v.start_x << ", start y: " << v.start_y << endl;
	cout << "end x: " << v.end_x << ", end y: " << v.end_y << endl;
}

// rename it to main()
int simpleclass()
{
	vector1 single_object;
	single_object.start_x = 1.0;
	single_object.start_y = 1.0;

	single_object.end_x = 3.0;
	single_object.end_y = 4.0;

	print_vector1(single_object);

	single_object.print();

	
	return 0;
}