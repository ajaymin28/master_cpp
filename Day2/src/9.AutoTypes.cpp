#include <iostream>
#include <typeinfo>
#include <vector>

using namespace std;


double multiply(double x, double y){
    return x * y;
}


// int main(){
int autotypes(){

    auto integer = 43;
    cout << "integer is of type " << typeid(integer).name() << endl;

    auto double_precision = multiply(1.4,2.7);
    cout << "double_precision is of type " << typeid(double_precision).name() << endl;


    vector<int> intvec;
    auto interator = intvec.begin();
    cout << "interator is of type " << typeid(interator).name() << endl;


    return 0;
}