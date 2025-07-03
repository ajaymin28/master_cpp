#include <iostream>
using namespace std;

// rename it to main()
int controlloops()
{
	
	// for loop
	cout << "Using for loop" << endl;
	int a = 4;
	for (int i = 1;i <= 10;i++) {
		cout << a << "*" << i << "=" << i * a << endl;
	}

	//while loop
	int i = 1;
	cout << "Using while loop" << endl;
	while (i <= 10) {
		cout << a << "*" << i << "=" << i * a << endl;
		i++;
	}

	// do while loop
	cout << "Using do while loop" << endl;
	i = 1;
	do {
		cout << a << "*" << i << "=" << i * a << endl;
		i++;
	} while (i <= 10);



	return 0;
}