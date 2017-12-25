#include "my.h"

void depthFS(VERTEXLIST* vList){
    
    STACK* stack = malloc(sizeof(STACK));
    vList -> head -> isVisited = true;
    char* string = malloc(26*sizeof(char));
    int i;
    int count = 0;
    VERTEX* tempVertex = vList -> head;
    
    //Set all characters of string to null
    for(i = 0; i < 26; i++){
        string[i] = '\0';
    }
    
    stackInit(stack);
    
    //Display
    string[count++] = tempVertex -> name;
    
    //Push
    stackPush(stack, tempVertex);
    
    while(stackTop(stack) != NULL){
        tempVertex = getNextUnvisited(stackTop(stack));        
        if(tempVertex == NULL){
            stackPop(stack);
        }else{
            tempVertex -> isVisited = true;
            string[count++] = tempVertex -> name;
            stackPush(stack, tempVertex);
        }
    }
    
    tempVertex = vList -> head;
    while(tempVertex != NULL){
        tempVertex -> isVisited = false;
        tempVertex = tempVertex -> nextVertex;
    }
    
    printf("-------------------------");
    printf("\nDepth First Search: %s\n", string);
    printf("-------------------------\n");
}