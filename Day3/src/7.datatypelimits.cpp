#include <iostream>
#include <limits>
#include <bitset>

using namespace std;

int main(){

    int imin = std::numeric_limits<int>::min(); // Smallest positive normal int
    int imax = std::numeric_limits<int>::max(); // Largest positive normal int
    cout << "int min: " << imin << " int max: " << imax << endl;

    unsigned int uimin = std::numeric_limits<unsigned int>::min(); // Smallest positive normal int
    unsigned int uimax = std::numeric_limits<unsigned int>::max(); // Largest positive normal int
    cout << "uint min: " << uimin << " uint max: " << uimax << endl;

    // std::bitset<32> imin_bit_rep(imin);
    // std::bitset<32> imax_bit_rep(imax);
    // cout << "int min bit: " << imin_bit_rep << endl;
    // cout << "int max bit: " << imax_bit_rep << endl;

    float fmin = std::numeric_limits<float>::min(); // Smallest positive normal int
    float fmax = std::numeric_limits<float>::max(); // Largest positive normal int
    cout << "float min: " << fmin << " float max: " << fmax << endl;


    return 0;
}