#include <iostream>
#include "IntegerArray.h"

using namespace std;

// int main(){
int destructormisc(){

    IntegerArray i1(5);

    // set data to i1
    for(int i=0;i<5;i++){
        i1.data[i] = i+10;
    }

    // print i1 data
    for(int i=0;i<5;i++){
        cout <<i << " i1 data["<<i<<"]="<<i1.data[i] << endl;
    }

    IntegerArray i2(5);
    for(int i=0;i<5;i++){
        i1.data[i] = i+20;
    }

    // print i2 data
    for(int i=0;i<5;i++){
        cout <<i << " i2 data["<<i<<"]="<<i2.data[i] << endl;
    }

    // calls copy constructor
    if(true){  
        cout << "Called copy construct inside local scope" << endl;
        IntegerArray i2(i1); 
        // upon exit from this scope i2 destruct will be called
    }

    // on shallow copy segmentation fault will happen since i1 mem is also destroyed along with i2.

    // print i1 data, due to deep copy i1 preserves the data
    for(int i=0;i<5;i++){
        cout <<i << " i1 data["<<i<<"]="<<i1.data[i] << endl;
    }

    // print i2 data (remember, the i2 is destroyed using destruct, so this will print garbage values.)
    for(int i=0;i<5;i++){
        cout <<i << " i2 data["<<i<<"]="<<i2.data[i] << endl;
    }


    




    return 0;
}