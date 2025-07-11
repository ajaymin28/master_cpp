#include <iostream>

using namespace std;

int calls;

//baseline fibonacci 
int fibonacci(int N){
    calls++;

    if(N<=1){
        return N;
    }

    return fibonacci(N-1) + fibonacci(N-2);
}

int fibonacci(int N, int *tmp){
    calls++;

    if(N<=1){
        return N;
    }

    if(tmp[N]!=0){
        return tmp[N]; // return cache if exist.
    }

    tmp[N] = fibonacci(N-1, tmp) + fibonacci(N-2, tmp); // compute onces only.
    return tmp[N];
}


int callBase(int N){
    return fibonacci(N);
}

int callMemo(int N){
    /* Memoization */
    int *tmp = new int[N+1];
    for(int i=0; i<N+1; i++){
        tmp[i] = 0;
    }
    int result = fibonacci(N, tmp);
    delete[] tmp;
    return result;
}


// int main(){
int memoization(){

    calls = 0;

    int N = 40;

    int results = callBase(N);
    cout << "Fibonacci of " << N << " is " << results << endl;
    cout << "BaseCalls " << calls << endl;

    calls = 0;
    results = 0;
    results = callMemo(N);
    cout << "Fibonacci of " << N << " is " << results << endl;
    cout << "callMemo " << calls << endl;


    return 0;
}