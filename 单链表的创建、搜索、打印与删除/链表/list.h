#ifndef __LIST_H__
#define __LIST_H_

typedef struct {
	int a;
}element;

typedef struct snode{
	element data;
	struct snode* next;
}sNode , *linked_list;

typedef struct _list {
	sNode * head;
	sNode * tail;
}List;

#endif // !__LIST_H__




