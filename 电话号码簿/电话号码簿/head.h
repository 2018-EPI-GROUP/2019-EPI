#ifndef __define__
#define __define__


typedef struct {
	char tel[13];
	char name[30];
	char add[30];  //address
}element;

typedef struct snode {
	element data;
	struct snode* next;
}sNode;

typedef struct _list {
	sNode * head;
	sNode * tail;
}List;

void print_sNode(List *pList);

#endif // !__define__