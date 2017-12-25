#include "my.h"

VERTEX* getVertex(char key, VERTEXLIST* vList){
    
    bool keyFound = false;
    VERTEX* current = vList -> head;
    
    while(current != NULL && !keyFound){
        if(current -> name == key){
            keyFound = true;
        }else{
            current = current -> nextVertex;
        }
        
    }
   return current; 
}
