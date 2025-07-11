#ifndef CACHE_H
#define CACHE_H

#include "common.h"
#include "RAM.h"

//--------------------- Cache Level --------------------
class Cache {
public:
    unordered_map<string, int> cache;
    string name;
    Cache* next_level = nullptr; // Points to next cache or RAM

    Cache(string n) : name(n) {}

    // Recursive fetch with cache promotion
    int fetch(const string& var, RAM* ram = nullptr);
    void write(const string& var, int value, RAM* ram = nullptr);
};

#endif