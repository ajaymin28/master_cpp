#ifndef MULTIPLEXER_H
#define MULTIPLEXER_H

#include "common.h"

//-------------------- MUX ----------------------------
class Multiplexer {
public:
    pair<int, int> select(int a, int b);
};

#endif