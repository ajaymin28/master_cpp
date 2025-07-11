#include "common.h"
#include "Cache.h"
#include "RAM.h"

int Cache::fetch(const string& var, RAM* ram = nullptr) {
    if (cache.count(var)) {
        cout << "Hit in " << name << " cache for " << var << endl;
        return cache[var];
    }
    if (next_level) {
        int val = next_level->fetch(var, ram);
        cache[var] = val; // Promote to this cache
        cout << "Promoted " << var << " to " << name << endl;
        return val;
    }
    if (ram) {
        cout << "Miss in all caches, fetching from RAM for " << var << endl;
        cache[var] = (*ram)[var]; // Load from RAM
        return cache[var];
    }
    throw std::runtime_error("Variable not found");
}

void Cache::write(const string& var, int value, RAM* ram = nullptr) {
        cache[var] = value;
        if (next_level) next_level->write(var, value, ram);
        else if (ram) (*ram)[var] = value;
}