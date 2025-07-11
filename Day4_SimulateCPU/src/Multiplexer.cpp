#include "Multiplexer.h"



pair<int, int> Multiplexer::select(int a, int b) {
    cout << "MUX selects operands: " << a << ", " << b << endl;
    return {a, b};
}