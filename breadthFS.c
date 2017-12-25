#include "my.h"

void breadthFS(VERTEXLIST* vList){
    
    QUEUE* queue = malloc(sizeof(QUEUE));
    vList -> head -> isVisited = true;
    char* string = malloc(26*sizeof(char));
    int i;
    int count = 0;
    VERTEX* tempVertex = vList -> head;
    
    //Set all characters of string to null
    for(i = 0; i < 26; i++){
        string[i] = '\0';
    }
    
    queueInit(queue);
    
    //Display
    string[count++] = tempVertex -> name;
    
    //Add to Queue
    queueAdd(queue, tempVertex);
    
    while(queue->num != 0){
        tempVertex = getNextUnvisited(queuePeek(queue));        
        if(tempVertex == NULL){
            queueRemove(queue);
        }else{
            tempVertex -> isVisited = true;
            string[count++] = tempVertex -> name;
            queueAdd(queue, tempVertex);
        }
    }
    
    tempVertex = vList -> head;
    while(tempVertex != NULL){
        tempVertex -> isVisited = false;
        tempVertex = tempVertex -> nextVertex;
    }
    
    printf("Breadth First Search: %s\n", string);
    printf("-------------------------\n");
}