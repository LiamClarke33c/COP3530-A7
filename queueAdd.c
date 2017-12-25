#include "my.h"

void queueAdd(QUEUE* queue, VERTEX* vertex){
    queue->data[++queue->rear] = vertex;
    queue -> num++;
}