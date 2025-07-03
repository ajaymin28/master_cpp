#include <iostream>
#include "myclass.h"
using namespace std;


// rename it to main()
int copconstruct()
{

	vector defined_vector(1.0, 2.0, 4.0, 5.0);
	defined_vector.print();

	// calls copy constructor
	vector flipped_vector = defined_vector;
	flipped_vector.print();
	
	
	return 0;
}