#ifndef DEBUG
#define DEBUG

#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

struct Cell {
    int value;
    struct Cell *next;
};

#endif
