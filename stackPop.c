#include "my.h"

void stackPop(STACK* s){
    if(s ->size == 0)
        fprintf(stderr, "Error: stack empty\n");
    else
        s->size--;

}