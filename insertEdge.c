#include "my.h"

void insertEdge(char key, EDGE* nextEdge, VERTEXLIST* vList){
    
    bool found = false;
    VERTEX* currentVertex = vList->head;
    
    while(!found){
        if(currentVertex->name == key){
            found = true;
        }else{
            currentVertex = currentVertex->nextVertex;
        }
    }
    
    nextEdge->nextEdge = currentVertex->edge;
    currentVertex->edge = nextEdge;
    
}