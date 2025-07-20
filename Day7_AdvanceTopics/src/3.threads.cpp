#include <iostream>
#include <thread>

using namespace std;

void print_thread_id(int id){
    std::cout << "Printing from thread: " << id << "\n";
}

// int main(){
int threads(){

    // std::thread t1(print_thread_id, 0);
    // t1.join();

    std::jthread t1(print_thread_id, 0); // automatic join of thread before exit
    
    return 0;
}