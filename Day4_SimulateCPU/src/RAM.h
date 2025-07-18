#ifndef RAM_H
#define RAM_H

#include "common.h"
using namespace std;
//----------------------- RAM --------------------------
class RAM {
public:
    unordered_map<string, int> memory;
    int& operator[](const string& var) { return memory[var]; }
};

#endif