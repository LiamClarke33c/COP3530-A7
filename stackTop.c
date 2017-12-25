#include "my.h"

VERTEX* stackTop(STACK* s){
    if(s->size == 0){
    //fprintf(stderr, "Error:stack empty\n");
    return NULL;
    }
    
    return s -> data[s->size-1];
}