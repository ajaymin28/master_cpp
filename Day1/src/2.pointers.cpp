#include <iostream>
using namespace std;


// rename it to main()
int pointerexamples()
{
	// Declare a variable
	int a = 5;
	cout << "a: value " << a << ", a: address" << &a << endl;

	// create a pointer
	int *b;  // currently pointing to a random mem address
	cout << "b: mem address value " << b << ", b: mem address of mem address " << &b << endl;


	// assign *b a value or point to other variable ref
	b = &a;    // pointing adress of a to b
	// b holds the value of a's address not the actual value, to get actual value we use dereferecing by like *b
	cout << "after referencing address of a to b" << endl;
	cout << "b: value " << b  << " *b: value " << *b << ", &b: address" << &b << endl;
	
	// change source value
	a = 30;
	cout << "after changing the value of a" << endl;
	cout << "b: value " << b << " *b: value " << *b << ", &b: address" << &b << endl;


	/*
	
		> when b = &a is done the b holds the a's address as value, so if you print b you will get address of a.
			> to get value of a trough the pointer b, we dereference pointer b by doing *b
			> b = 0004ad0909d_mem_add
			> *b = value of a
			> &b = adress value of b where its storing the address of a. 
	*/

	// variables using reference

	int c = 3;
	int& d = c;

	cout << "c: value " << c << " c: address " << &c << endl;
	cout << "d: value " << d << " c: address " << &d << endl;

	c = 20; 
	/*
		changing the value of c will also change value of d 
		since d is referencing to address of c.
	*/ 


	cout << "c: value " << c << " c: address " << &c << endl;
	cout << "d: value " << d << " c: address " << &d << endl;


	return 0;
}