#include <iostream>
#include <thread>
#include <atomic>

using namespace std;

// int main(){
int atomic(){
    
    std::atomic<int> counter = 0;
    // int conter = 0;
    auto work = [&counter](){
        for(int i=0;i<10000;i++){
            counter +=1;
        }
    };

    std::thread t1(work);
    std::thread t2(work);

    t1.join();
    t2.join();

    cout << "counter: " << counter << endl;

    return 0;
}