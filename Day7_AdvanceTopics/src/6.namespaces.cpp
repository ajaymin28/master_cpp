#include <iostream>

namespace A {
    void print(){
        std::cout << "This is print function 1" << std::endl;
    }
}

void print(){
    std::cout << "This is print function 2" << std::endl;
}

// int main(){
int namspaces_example(){

    print(); // will call from global namespace, i.e function 2

    A::print(); // will call from A namespace, i.e function 1
    return 0;
}