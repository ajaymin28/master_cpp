#include <iostream>
using namespace std;

// function overloading
void passbyref(int& a, int& b) {
	cout << "inside function passbyref" << endl;
	cout << "a "<< a << " b " << b << endl;
	a = a + b;
	cout << "performed a = a + b. Now a=" << a << " b=" << b << endl;
}

void passbyval(int a, int b) {
	cout << "inside function passbyval" << endl;
	cout << "a " << a << " b " << b << endl;
	a = a + b;
	cout << "performed a = a + b. Now a=" << a << " b=" << b << endl;
}

// rename it to main()
int passbyvalref()
{
	int a = 1, b=2;

	passbyval(a,b);
	cout << "[in main] after passbyval " <<  "a " << a << " b " << b << endl;

	passbyref(a, b);
	cout << "[in main] after passbyref " << "a " << a << " b " << b << endl;


	return 0;
}