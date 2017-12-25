#include "my.h"

void queueInit(QUEUE* queue){
   queue-> front = 0;
   queue-> rear = -1;
   queue-> num = 0;
}