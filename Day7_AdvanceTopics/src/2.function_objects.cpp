#include <iostream>
#include <vector>

using namespace std;

struct IsDivisible{
    int divisor;
    IsDivisible(int new_divisor): divisor(new_divisor) {}

    // operator overloading for call '()' operator
    bool operator()(int dividend){
        return dividend % divisor == 0;
    }
};

// int main(){
int func_objects(){

    IsDivisible is_divisible_by_10(10);
    std::vector<int> my_vector = {23,45,76,80, 34, 50};

    cout << "Is 20 divisible by 10 " << is_divisible_by_10(20) << endl;

    auto itr = std::ranges::find_if(my_vector, is_divisible_by_10); // here is_divisible_by_10 is a function object
    std::cout << "itr " << *itr << endl;

    // use subrange to find next divisible element
    auto itr2 = std::ranges::find_if(std::ranges::subrange(itr+1, my_vector.end()), is_divisible_by_10);
    std::cout << "itr " << *itr2 << endl;

    return 0;
}