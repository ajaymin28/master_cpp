#include <iostream>


using namespace std;

void static_count(){
    static int count = 0;  // init once; static adds persistance, wont be relased once function ends.
    cout << "Count : " << count << endl;
    count++;
}

class flagClass{
    private: 
        mutable int accesses; // makes it mutable inside const function/method
        bool flag;

    public:
        flagClass(bool f){
            accesses = 0;
            flag = f;
        }

        bool get_flag() const {
            accesses++; // can be done only when its mutable else compiler will give an error.
            cout << "Access incremented to " << accesses << endl;
            return flag;
        }
};


// int main(){
int modifiers(){

    for(int i=0;i<5;i++){
        static_count(); // if we have int count = 0; without static, it will always be 0;
    }

    flagClass fc(true);

    bool flag;
    for(int i=0;i<5;i++){
        flag = fc.get_flag(); 
        cout << "Flag: " << flag << endl;
    }


    // volatile| non volatile
    int non_volatile_int = 1;
    volatile int volatile_int = 1;

    for(int i=0;i<16;i++){
        non_volatile_int *=2;
    }

    for(int i=0;i<16;i++){
        volatile_int *=2;
    }


    // This will be same in single threaded program
    /*

    Every read or write to volatile_int will actually happen at the memory location where it’s stored.
    This is essential if the variable can be changed outside the current program flow like thread.

    */

    // optimizer will not optimize the volatile memory.
    cout << "Non-volatile: " << non_volatile_int << endl;
    cout << "volatile: " << volatile_int << endl;



    return 0;
}