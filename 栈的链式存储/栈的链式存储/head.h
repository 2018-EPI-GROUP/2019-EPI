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

void *push_sNode(List *pList, int number);      //��ջ����

element * pop_sNode(List * pList);				//��ջ����

void print_sNode(List *pList);                    //��ӡ����

int get_sNode(List *pList, int input);            //���->ֵ����


#endif // !__define__