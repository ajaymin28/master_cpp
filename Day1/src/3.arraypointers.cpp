#include <iostream>
using namespace std;


// rename it to main()
int arraypointers()
{
	// declare int array
	int a[10];

	for (int i = 0; i < 10;i++) {
		a[i] = i+10;
	}

	for (int i = 0; i < 10;i++) {
		cout << "i " << i << " a[i] " << a[i] << " &a[i] " << &a[i] << endl;
	}

	// pointer arithmetic
	int *ptr = a;
	cout << "a[0] = *ptr = " << *ptr << " *ptr value=" << ptr << endl;
	cout << "performing *ptr++" << endl;
	ptr++; // c++ knows its int pointer so it moves +4 bytes mem with ++
	cout << "a[1] = *ptr = " << *ptr << " *ptr value=" << ptr << endl;

	// char pointer string
	const char *hw_string = "Hello world!";
	
	cout << hw_string << endl;
	cout << *hw_string << endl;
	cout << &hw_string << endl;

	const char *cptr = hw_string;
	cout << "hw_string[0] = *cptr = " << *cptr << " &cptr value=" << &cptr << endl;
	cptr++;
	cout << "hw_string[1] = *cptr = " << *cptr << " &cptr value=" << &cptr << endl;

	//char hw_str_array[] = { 'H', 'e', 'l' , 'l', 'o', ' ', 'w', 'o','r', 'd','!' };
	//char *cptr = hw_str_array;
	//cout << "hw_str_array[0] = *cptr = " << *cptr << " &cptr value=" << &cptr << endl;
	//cptr++;
	//cout << "hw_str_array[1] = *cptr = " << *cptr << " &cptr value=" << &cptr << endl;

	
	return 0;
}