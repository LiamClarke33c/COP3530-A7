#include "my.h"

VERTEX* noSucessors(VERTEXLIST* vList){
    bool hasSuccessor = true;
    VERTEX* currentVertex = vList -> head;
    
    while(currentVertex != NULL && hasSuccessor){
        hasSuccessor = false;
        EDGE* currentEdge = currentVertex -> edge;
        if(currentVertex->isVisited) {
            hasSuccessor = true;
        } else if (currentEdge == NULL) {
            break;
        } else {
            while(currentEdge != NULL && !hasSuccessor){
                if(!(currentEdge -> vertex -> isVisited)){ 
                    hasSuccessor = true;           
                }else{
                    hasSuccessor = false;
                }
                currentEdge = currentEdge -> nextEdge;
            }
        }
        if(hasSuccessor) {
            currentVertex = currentVertex -> nextVertex;
        }
    }
    if(hasSuccessor) {
        currentVertex = NULL;
    }
    
    return currentVertex;
}