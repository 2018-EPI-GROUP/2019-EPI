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

void* create_dNode(List *pList, element* pele);			  //��������

void print_dNode(List *pList);						      //��ӡ����

int get_dNode(List *pList, int input);                    //���->ֵ����

void find_dNode(List *pList, int _numtofind);             //����ֵ����

void* insert_dNode(List *pList, int index, int value);    //���뺯��

void delete_dNode(List * pList, int value);				  //ɾ������

#endif // !__LIST_H__
