#include "my.h"

void toplogSort(VERTEXLIST* vList){
    VERTEX* currentVertex;
    int count = 0;
    int i;
    char string[26];
    
    for(i = 0; i < 26; i++){
        string[i] = '\0';
    }
    while(true){
        currentVertex = noSucessors(vList);
        if(currentVertex == NULL){
           // printf("ERROR: Graph has cycles.\n");
            break;
        }
        string[count] = currentVertex -> name;
        currentVertex -> isVisited = true;
        count++;
    }
    strrev(string);
    printf("Topological Sort: %s\n", string);
    printf("-------------------------\n");
}