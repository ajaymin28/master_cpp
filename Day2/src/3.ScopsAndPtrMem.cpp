#include <iostream>

using namespace std;


int* getBadPtr(){
    int x = 5;  // This is local variable and stored in stack mem
    return &x;
    // as the fuction returns the stack mem pops up the x mem. 
}

int* getGoodPtr(){
    int *x = new int;  // This allocates a heap mem instead of stack
    *x = 5; // *var does the dererecencing meaning you are assigning value to the variable not setting the mem
    return x;
    // as the fuction returns the heap mem stays intact.
}


// int main(){
int scopsandptrmem(){

    if(true){
        int x = 10;  // local variable to the if condition, stored in a stack mem.
    }

    // Incorrect way to get pointer to a number
    int *p1 = getBadPtr();
    cout << "Adress: " << p1 << " Value: " << *p1 << endl;

    // Incorrect way to get pointer to a number
    int *p2 = getGoodPtr();
    cout << "Adress: " << p2 << " Value: " << *p2 << endl;

    //Release heap allocated mem
    delete p2;

    cout << "Adress: " << p2 << " Value: " << *p2 << endl; // address remains the same but value is erased.


    // new keyword can be used with any data type
    // these needs to be manually de-allocated
    int *array = new int[100];

    // De-allocation at once
    delete[] array;



    return 0;
}