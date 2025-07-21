#include <iostream>
#include <random>

using namespace std;

// int main(){
int randomnumgen(){

    std::random_device rd;
    // std::mt19937 mt(39); //static seed
    std::mt19937 mt(rd()); // dynamic seed
    std::uniform_int_distribution uniform(1,6);
    for(int i=0;i<10;i++){
        // cout << rd() << " ";
        // cout << mt() << " ";
        cout << uniform(mt) << " ";
    }
    cout << endl;

    return 0;
}