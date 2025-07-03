#include <iostream>
#include <vector>

using namespace std;

// int main(){
int foreachloop(){

    // For each loop
    for(int i: {1,2,3,4,5,6,7}){
        cout << i << " ";
    }
    cout << endl;

    vector<int> intvec;
    int temp;

    // initialize vector with random values
    for(unsigned i=0; i< 6; i++){
        temp = rand() % 100;
        cout << temp << " ";
        intvec.push_back(temp);
    }
    cout << endl;

    // for each values in vector increment it by 1
    for(auto &i: intvec){
        i++;
    }

    for(unsigned i=0; i< intvec.size(); i++){
        cout << intvec[i] << " ";
    }
    cout << endl;
    


    return 0;
}