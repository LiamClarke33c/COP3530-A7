//
//  William Clarke
//  n00935124
//  COP3530.A7
//  11/22/2016
//
//
//

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define STACK_MAX 26
#define QUEUE_MAX 26

/* Forward declaration */
struct EDGETAG;

typedef struct VERTEX
{
    char name;
    bool isVisited;
    struct EDGETAG* edge;
	struct VERTEX* nextVertex;
} VERTEX;


typedef struct EDGETAG
{
    struct VERTEX* vertex;
    struct EDGETAG* nextEdge;
} EDGE;

typedef struct VERTEXLIST
{
	struct VERTEX* head;
} VERTEXLIST;

typedef struct STACK{
    VERTEX* data[STACK_MAX];
    int size;
} STACK;

typedef struct QUEUE{
    VERTEX* data[QUEUE_MAX];
    int front;
    int rear;
    int num;
} QUEUE;

//VERTEXLIST PROTOTYPES
void insertEdge(char key, EDGE* nextEdge, VERTEXLIST* vList);
void insertVertex(VERTEXLIST* vList, VERTEX* newVertex);
void readFile(char* userFile, VERTEXLIST* vList);
bool search(char key, VERTEXLIST* vList);
VERTEX* getVertex(char key, VERTEXLIST* vList);
void printAdjList(VERTEXLIST* vList);
VERTEX* noSucessors(VERTEXLIST* vList);
char *strrev(char *str);

//SEARCH PROTOTYPES
void depthFS(VERTEXLIST* vList);
void breadthFS(VERTEXLIST* vList);
void toplogSort(VERTEXLIST* vList);
VERTEX* getNextUnvisited(VERTEX* vertex);

//STACK PROTOTYPES
VERTEX* stackTop(STACK* s);
void stackPush(STACK* s, VERTEX* d);
void stackPop(STACK* s);
void stackInit(STACK* s);

//QUEUE PROTOTYPES
void queueInit(QUEUE* queue);
void queueAdd(QUEUE* queue, VERTEX* vertex);
void queueRemove(QUEUE* queue);
VERTEX* queuePeek(QUEUE* queue);
