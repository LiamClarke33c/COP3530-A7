#include "my.h"

void printAdjList(VERTEXLIST* vList){
    EDGE* tempEdge;
    char character;
    VERTEX* current = vList -> head;
    printf("-------------------------\n");
    printf("Vertex|List of Edges\n");
    
    while(current != NULL){
        character = current -> name;
        tempEdge = current -> edge;
        int count = 0;
        char* string = malloc(100*sizeof(char));
        int i;
        for(i = 0; i < 100; i++){
            string[i] = '\0';
        }
        
        while(tempEdge != NULL){
            string[count] = tempEdge -> vertex -> name;
            
            if(tempEdge -> nextEdge != NULL){
                string[count + 1] = '-';
                string[count + 2] = '>';
                count += 2;
            }
            count++;
            tempEdge = tempEdge -> nextEdge;
        }
        current = current -> nextVertex;
        
        printf("%-6c %-13s\n", character, string);
    }
    
}