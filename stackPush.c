#include "my.h"

void stackPush(STACK* s, VERTEX* d){
    if(s->size < STACK_MAX)
        s->data[s->size++] = d;
    else
        fprintf(stderr, "Error: stack full\n");
}