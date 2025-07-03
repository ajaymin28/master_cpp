#include <iostream>
using namespace std;

// rename it to main()
int conditions()
{
	// Declare (assign memory and get a placeholer)
	// If we dont do this, there is no place we can place our data. 

	int a = 4;
	int b = 6;

	if (a < b) {
		cout << "a is less than b" << endl;
	}else if (b < a) {
		cout << "b is less than a" << endl;
	}else {
		cout << "a is eq to b" << endl;
	}

	switch (a) {
		case 4:
			cout << "a is 4";
			break;  

			/* commenting or not including break; will also go through other 
			 cases including default block. */

		case 5:
			cout << "a is 5 in case 5:";
			break;
		default:
			cout << "default a is " << a;
	}

	return 0;
}