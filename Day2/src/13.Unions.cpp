#include <iostream>

using namespace std;

struct various_data{
    //1 byte
    char a;
    //4 bytes
    int b;
    //4 bytes
    float c;
    //8bytes 
    double d;
};

union union_test{
    various_data union_struct;
    int union_int;
    float union_float;
    double union_double;
};

// int main(){
int unionstest(){
    // struct
    various_data v_data;
    v_data.a = 'a';
    v_data.b = 18;
    v_data.c = 867.5309f;
    v_data.d = 2001.1002;

    cout << "sizeof struct: " << sizeof(various_data) << endl;

    // union uses fixed max mem required
    union_test u_test;
    u_test.union_struct = v_data;

    cout << "sizeof union: " << sizeof(u_test) << endl;
    cout << "Union pointer: " << &u_test << " , Field pointer" << &(u_test.union_struct) << endl;

    int b = 5;
    cout << " int pointer" << &(b) << endl;

    u_test.union_int = b;

    cout << "sizeof union: " << sizeof(u_test) << endl;
    cout << "Union pointer: " << &u_test << " , Field pointer" << &(u_test.union_int) << endl;

    return 0;
}