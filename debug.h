#ifndef DEBUG
#define DEBUG

#include <stdio.h>
#include <string.h>

struct Cell {
    int value;
    struct Cell *next;
  };
  
  struct Cell *newCell(int value){
    struct Cell *p=malloc(sizeof(p)); 
    if (p==NULL) exit(2);             
    p->value=value;
    return p;
  }

#endif