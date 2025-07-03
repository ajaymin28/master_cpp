#include <iostream>

using namespace std;

template <typename T>
T sum(const T a, const T b){
    return a + b;
}

template <typename T, typename U>
U sum(const T a, const U b){
    return a + b;
}

// int main(){
int functemplates(){

    int ia = 10;
    int ib = 20;

    double da = 5.1;
    double db = 1.5;

    cout << "calling template single type T: " << sum<int>(ia,ib) << endl;
    cout << "calling template single type T: " << sum<double>(da,db) << endl;

    cout << "calling template type <T,U>: " << sum<int, double>(ia,da) << endl;
    cout << "calling template type <U,T>: " << sum<double,int>(da,ia) << endl;


    cout << "calling template without specifying type: " << sum(ia,da) << endl;
    cout << "calling template without specifying type: " << sum(da,ia) << endl;

    return 0;
}