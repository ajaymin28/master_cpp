#include <iostream>
using namespace std;

// rename it to main()
// int sumnum()
int main()
{
	// Declare (assign memory and get a placeholer)
	// If we dont do this, there is no place we can place our data. 
	int num1;
	int num2;
	int sum;

	// Declare and init in same step
	// int a = 10;

	// Initialize
	num1 = 10;
	num2 = 23;

	// comupute and put results in a variable
	sum = num1 + num2;

	cout << "The sum for " << num1 << " and " << num2 << " is " << sum << endl;
	return 0;
}