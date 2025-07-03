#include <iostream>
using namespace std;

// recursion
int factorial(int n) {
	/* n*(n-1)*(n-2) ... *(n-(n-1)) */
	if (n <= 1) {
		return 1;
	}
	else {
		return (n * factorial(n - 1));
	}
}

// recursion
int fibonacci(int n) {
	/* 1 1 2 3 5 8 13 ... */
	if (n == 0) {
		return 0;
	}
	else if (n == 1) {
		return 1;
	}
	else {
		return(fibonacci(n - 2) + fibonacci(n - 1));
	}
}

// rename it to main()
int recursion()
{
	int n=5;
	int fn = factorial(n);
	int fibn = fibonacci(n);

	cout << "factorial of " << n << "! is " << fn << endl;

	cout << "fibonacci nth digit of " << n << " is " << fibn << endl;

	return 0;
}