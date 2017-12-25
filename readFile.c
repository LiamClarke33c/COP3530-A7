#include "my.h"

void readFile(char* userFile, VERTEXLIST* vList){
    
    FILE* inputFile;
    char buffer[5];
    char firstCharacter;
    char secondCharacter;
    int i;
    int count;
    
    inputFile = fopen(userFile, "r");
   
    //Read the file, line by line, and find a character
    while(fscanf(inputFile, "%c %c ", &firstCharacter, &secondCharacter) != EOF){ //!end of file
	
		if(!search(firstCharacter, vList)) {
			VERTEX* new = malloc(sizeof(VERTEX));
		    new -> name = firstCharacter;
		    new -> nextVertex = NULL;
		    new -> edge = NULL;
		    new -> isVisited = false;
		    insertVertex(vList, new);
		}
		
		if(!search(secondCharacter, vList)) {
			VERTEX* new = malloc(sizeof(VERTEX));
		    new -> name = secondCharacter;
		    new -> nextVertex = NULL;
		    new -> edge = NULL;
		    new -> isVisited = false;
		    insertVertex(vList, new);
		}
		
        EDGE* newEdge = malloc(sizeof(EDGE));
        newEdge -> vertex = getVertex(secondCharacter, vList);
        newEdge -> nextEdge = NULL;
        insertEdge(firstCharacter, newEdge, vList);
    }
    fclose(inputFile);
}