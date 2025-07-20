#include <iostream>
#include <thread>
#include <vector>
#include <mutex>

using namespace std;

// void print_thread_id(int id){
//     std::cout << "Printing from thread: " << id << "\n";
// }

// int main(){
int mutex(){
    std::mutex mt;

    // lambda function
    auto print_thread_id = [&mt](int id){
        std::lock_guard<std::mutex> lg(mt); // we can do lock unlock or use lock_guard()
        // mt.lock(); 
        std::cout << "Printing from thread: " << id << endl;
        // mt.unlock();
    };

    // std::thread t1(print_thread_id, 0);
    // t1.join();

    // std::jthread t1(print_thread_id, 0); // automatic join of thread before exit

    std::vector<std::jthread> my_threads;
    for(int i=0;i<3;i++){
        my_threads.emplace_back(print_thread_id, i);
    }

    return 0;
}