#include <iostream>
using namespace std;

char printchar(char c) {
	cout << "char value " << c << " size of char is " << sizeof(c) << " byte" << endl;
	return 'b';
}

int printint(int i) {
	cout << "int value " << i << " size of int is " << sizeof(i) << " byte" << endl;
	return 123;
}

float printfloat(float f) {
	cout << "float value " << f << " size of float is " << sizeof(f) << " byte" << endl;
	return 25.65;
}

double printdouble(double d) {
	cout << "double value " << d << " size of double is " << sizeof(d) << " byte" << endl;
	return 635.568;
}

// rename it to main()
int func_and_datatypes()
{
	char character = 'a';
	int integer = 1;
	float single_precision = 20.123;
	double double_precision = 20.123;

	character = printchar(character);
	integer = printint(integer);
	single_precision = printfloat(single_precision);
	double_precision = printdouble(double_precision);

	cout << "new char " << character << endl;
	cout << "new int " << integer << endl;
	cout << "new float " << single_precision << endl;
	cout << "new double " << double_precision << endl;

	/*

	char value a size of char is 1 byte
	int value 1 size of int is 4 byte
	float value 20.123 size of float is 4 byte
	double value 20.123 size of double is 8 byte

	1 byte = 4 bit;
	max value = 2^4 = 16 bits 

	4 byte = 16 bit;
	max value = 2^16 = 65536 bits   
		for signed int: (-32,768 to 32,767) 
		for unsigned int: (from 0 to 65,535)



	8 byte = 32 bit;
	max value = 2^32 = 4294967296 bits




	new char b
	new int 123
	new float 25.65
	new double 635.568
	*/

	return 0;
}