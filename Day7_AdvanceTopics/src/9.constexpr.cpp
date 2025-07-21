#include <iostream>

using namespace std;

// with constexpr the calculation happens compile time, instead of runtime
constexpr int factorial(int n){
    if(n<=1){
        return 1;
    }else{
        return n * factorial(n-1);
    }
}

int main(){
    constexpr int fact_n = factorial(5);
    cout << fact_n << endl;
    return 0;
}