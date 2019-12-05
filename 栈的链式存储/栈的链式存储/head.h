#ifndef __define__
#define __define__


typedef struct {
	int a;
}element;

typedef struct snode {
	element data;
	struct snode* next;
}sNode, *linked_list;

typedef struct _list {
	sNode * top;
	sNode * tail;
}List;

void *push_sNode(List *pList, int number);      //进栈函数

element * pop_sNode(List * pList);				//出栈函数

void print_sNode(List *pList);                    //打印函数

int get_sNode(List *pList, int input);            //序号->值函数


#endif // !__define__