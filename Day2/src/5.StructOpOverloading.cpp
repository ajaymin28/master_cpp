#include <iostream>
#include "IntegerArray.h"

using namespace std;

struct Centeroid{
    int x;
    int y;
    Centeroid(const int x=0, const int y=0): x(x), y(y) {}
};

struct S 
{
    int x;
    int y;
    auto operator<=>(const S &s) const = default; // defaulted threeway comparision
};


IntegerArray operator+(const IntegerArray c1, const IntegerArray c2){

    int new_array_size = c1.size + c2.size;

    IntegerArray newArray(new_array_size); // constrcutor will allocate new mem.

    int array_offset = 0;
    for(int i=0;i<c1.size;i++){
        newArray.data[i] = c1.data[i];
        array_offset++;
    }
    for(int i=0;i<c2.size;i++){
        newArray.data[array_offset+i] = c2.data[i];
    }

    return newArray;
}


Centeroid operator+(const Centeroid c1, const Centeroid c2){
    /*Add two Centers by x,y values*/
    Centeroid tmp(0,0);
    tmp.x = c1.x + c2.x;
    tmp.y = c1.y + c2.y;
    return tmp;
}

// int main(){
int structopoverload(){

    Centeroid one(1,4);
    Centeroid two(2,6);

    Centeroid center = one + two;
    cout << "Center x:"<< center.x << " y:" << center.y << endl;

    // Use IntegerArray class from the previous code example.

    IntegerArray a1(5);
    IntegerArray a2(5);

    for(int i=0;i<5;i++){
        a1.data[i] = i;
        a2.data[i] = 10+i;
    }

    for(int i=0;i<a1.size;i++){
        cout <<i << " a1 data["<<i<<"]="<<a1.data[i] << endl;
    }
    for(int i=0;i<a2.size;i++){
        cout <<i << " a2 data["<<i<<"]="<<a2.data[i] << endl;
    }

    // op+ overload + copy constructor
    // IntegerArray a3 = a1 + a2;
    IntegerArray a3(a1 + a2);

    for(int i=0;i<a3.size;i++){
        cout <<i << " a3 data["<<i<<"]="<<a3.data[i] << endl;
    }

    return 0;
}