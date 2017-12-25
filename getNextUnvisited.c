#include "my.h"

VERTEX* getNextUnvisited(VERTEX* vertex){
    VERTEX* result = NULL;
    EDGE* tempEdge = vertex -> edge;
    bool foundUnvisited = false;
    
    while(tempEdge != NULL && !foundUnvisited){
        if(!(tempEdge -> vertex -> isVisited)){
            result = tempEdge -> vertex;
            foundUnvisited = true;
        }else{
            tempEdge = tempEdge -> nextEdge;
        }
    }
    
    return result;
}