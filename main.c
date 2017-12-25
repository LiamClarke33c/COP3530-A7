#include "my.h"
 
int main(int argc, char* argv[]) {
	VERTEXLIST* vList = (VERTEXLIST*)malloc(sizeof(VERTEXLIST));
	vList->head = NULL;
    readFile(argv[1], vList);
	printAdjList(vList);
    depthFS(vList);
    breadthFS(vList);
    toplogSort(vList);
    
	return 0;
}
