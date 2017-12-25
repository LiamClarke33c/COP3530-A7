#include "my.h"

void insertVertex(VERTEXLIST* vList, VERTEX* newVertex){
    
    newVertex->nextVertex = vList->head;
    vList->head = newVertex;
}