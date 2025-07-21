#include <iostream>
#include <bitset>
#include <cstring> // for memcpy
#include <iomanip> // set precision

void showFloatBits(float f) {
    uint32_t bits;
    std::memcpy(&bits, &f, sizeof(bits));
    std::bitset<32> bit_rep(bits);
    std::cout << "Float: " << f << ", Bits: " << bit_rep << std::endl;
}

bool almostEqual(float a, float b, float epsilon = 1e-5f) {
    // 0.00001;
    return std::fabs(a - b) < epsilon;
}

int main() {
// int floatops() {

    int x = 2;
    std::bitset<32> intbit_rep(x);
    std::cout << "Int X: " << x << " Bit rep: " << intbit_rep << std::endl;

    showFloatBits(3.14f);
    showFloatBits(-3.14f);


    // precision loss
    float large = 1e30f;
    float small = 1.0f;

    float sum = large + small;
    std::cout << std::setprecision(10) << "Sum: " << sum << std::endl;
    std::cout << "Difference: " << sum - large << std::endl; // should be ~1.0

    // float comparision with epsilon, == fails sometims due to rounding errors
    float xf = 0.1f * 7.0f;
    float yf = 0.7f;

    std::cout << "x == y? " << (xf == yf ? "True" : "False") << std::endl;
    std::cout << "x ~= y? " << (almostEqual(xf, yf) ? "Yes" : "No") << std::endl;

    // check for nan and inf
    float zero = 0.0f;
    float inf = 1.0f / zero;
    float nan = zero / zero;

    std::cout << "inf: " << inf << ", isinf: " << std::isinf(inf) << std::endl;
    std::cout << "nan: " << nan << ", isnan: " << std::isnan(nan) << std::endl;

    // underflow and subnormals
    small = std::numeric_limits<float>::min(); // Smallest positive normal
    float sub = small / 2.0f;

    std::cout << "Subnormal candidate: " << sub << std::endl;
    std::cout << "Is normal? " << std::isnormal(sub) << std::endl;

    // float to int casting 
    float big = 1e38f;  // Exceeds int range
    int i = static_cast<int>(big);

    std::cout << "Converted int: " << i << std::endl;


    // fused multiply add

    float a = 1e8f, b = 1e-8f, c = -1.0f;

    float reg = a * b + c; // performs a*b then rounds it and then + c with rounding again
    float fma_result = std::fma(a, b, c);  // performs a*b + c with rounding only once

    std::cout << "Regular multiply-add: " << reg << std::endl;
    std::cout << "FMA result: " << fma_result << std::endl;





    return 0;
}