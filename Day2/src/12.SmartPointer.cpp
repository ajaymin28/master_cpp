#include <iostream>
#include <memory>

using namespace std;


int main(){

    shared_ptr<int> shared_int1(new int(5));
    shared_ptr<int> shared_int2  = shared_int1;  // copy constructor will increase the counter of usage.

    cout << "use coutn of shared_int1: " << shared_int1.use_count() << endl;
    cout << "use coutn of shared_int2: " << shared_int2.use_count() << endl;


    // Weak pointer, are not the owner of the memory
    weak_ptr<int> weak_int = shared_int1;

    cout << "use coutn of weak_int: " << weak_int.use_count() << endl;

    // convert weak pointer to shared pointer
    auto shared_int3 = weak_int.lock();
    cout << "use coutn of shared_int_3: " << shared_int3.use_count() << endl;

    // destroy the mem for 2 of the shared pointers and check uniqueness
    shared_int1.reset();
    shared_int2.reset();
    cout << "use coutn of shared_int_3: " << shared_int3.use_count() << endl;

    /* Getting an error here on windows visual studio code */
    // cout << "is unique? shared_int_3: " << shared_int3.unique() << endl;

    // reset the last pointer
    shared_int3.reset();
    cout << "is valid? shared_int_3: " << shared_int3.get() << endl;

    // unique pointers
    // are the only owner of the mem, sharing is not allowed
    unique_ptr<int> unique_int(new int(10));


    return 0;
}