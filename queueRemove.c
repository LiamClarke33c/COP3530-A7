#include "my.h"

void queueRemove(QUEUE* queue){
    (queue->front)++;
    queue->num--;
}