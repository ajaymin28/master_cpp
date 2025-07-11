#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;


// int main(){
int unorderedmaps(){

    unordered_map<string, double> constants;

    string sPI = "PI";
    double dPI = 3.141592657;
    constants[sPI] = dPI;

    // other way to add elements
    dPI = 3.15;
    constants.insert(make_pair(sPI, dPI)); // will not insert since PI key is already there.

    dPI = 3.15;
    string swPI = "WrongPI";
    constants.insert(make_pair(swPI, dPI)); // will insert since WrongPI key is not there.

    for(auto itr= constants.begin(); itr!=constants.end(); itr++){
        cout << "Key:" << itr->first << " Value:" << itr->second << endl;  
    }

    string lambda = "LAMBDA";
    if(constants.find(lambda)==constants.end()){
        cout << "Cant find " << lambda << endl;
    }


    return 0;
}