#ifndef __LIST_H__
#define __LIST_H_

typedef struct {
	int a;
}element;

typedef struct dnode {
	element data;
	struct dnode*  prev;
	struct dnode*  next;
}dNode;

typedef struct _list {
	dNode * head;
	dNode * tail;
}List;

void* create_dNode(List *pList, element* pele);			  //创建函数

void print_dNode(List *pList);						      //打印函数

int get_dNode(List *pList, int input);                    //序号->值函数

void find_dNode(List *pList, int _numtofind);             //查找值函数

void* insert_dNode(List *pList, int index, int value);    //插入函数

void delete_dNode(List * pList, int value);				  //删除函数

#endif // !__LIST_H__
