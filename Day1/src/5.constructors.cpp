#include <iostream>
#include "myclass.h"
using namespace std;


// rename it to main()
int constructors()
{
	vector simple_vector;
	simple_vector.print();

	cout << endl;

	vector defined_vector(1.0, 2.0, 4.0, 5.0);
	defined_vector.print();

	cout << endl;

	simple_vector.update(3.0, 8.0, 9.0, -1.0);
	simple_vector.print();

	
	return 0;
}