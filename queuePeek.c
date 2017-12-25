#include "my.h"

VERTEX* queuePeek(QUEUE* queue){
    VERTEX* result = NULL;
    if(queue->num > 0){
       result = queue->data[queue->front]; 
    }
        
    return result;
}