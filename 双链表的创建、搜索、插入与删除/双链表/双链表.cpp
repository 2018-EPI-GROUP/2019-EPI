#include"dlist.h"
#include<stdio.h>
#include<stdlib.h>

/*
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
*/

void* create_dNode(List *pList, element* pele)
{
	dNode *p = (dNode*) malloc(sizeof(dNode));              //创建新结点

	p->data = *pele;

	p->prev  = NULL;						//初始化

	p->next = NULL ;

	if (!pList->head && !pList->tail) {

		pList->head = p;                 //创建头结点 

		pList->tail = p;
	}
	else {
		pList->tail->next = p;
		
		p->prev = pList->tail;					//链接
		
		pList->tail = p;
	}
	return 0;
}

void print_dNode(List *pList)                        //打印函数
{
	dNode *p;

	printf("Double linked list now is:\n");

	for (p = pList->head; p; p = p->next) {           //从头开始打印

		printf("%d\n", p->data.a);
	}
/*	for (p = pList->tail; p; p = p->prev) {           //从尾开始打印

		printf("%d\n", p->data.a);
	}
*/
}

void* insert_dNode(List *pList, int index,int value)
{
	int i = 1;
	
	dNode *p;			 //定义指针变量“寻找”位置

	dNode *q = (dNode*)malloc(sizeof(dNode));		//新定义一个节点

	q->data.a = value;						//给结点赋值

	q->next = q->prev = NULL;				//初始化节点的指针域

	for (p = pList->head; p; p = p->next,i++ ) {     //从head开始找

		if (index == 1) {					
			
			pList->head = q;
												//default开头的情况
			q->next = p;

			p->prev = q;
		}
		if (i == index) {
			p->prev->next = q;				//先将前一个结点的next指向新结点

			q->prev = p->prev;				//然后将新结点的prev指向前一个结点

			q->next = p;					//再使新结点的next指向后一个

			p->prev = q;					//最后让后一个结点的prev指向新结点，链接完成
		}
	}
	return 0;
}

int get_dNode(List *pList, int input)                  //序号->值函数
{
	int i = 1;

	dNode *p;

	for (p = pList->head; p; p = p->next, i++) {

		if (i == input) {

			printf("The %dth number is %d\n\n", input, p->data.a);

			break;
		}
	}
	return p->data.a;
}

void find_dNode(List *pList, int _numtofind)               //查找值函数
{
	int i = 1, isfound = 0;

	dNode *p;

	for (p = pList->head; p; p = p->next, i++) {

		if (p->data.a == _numtofind) {

			printf("Eureka ! The order number is %d.\n\n", i);

			isfound = 1;

			break;
		}
	}
	if (isfound = 0)
		printf("Fail to find it.\n");

	return;
}

void delete_dNode(List * pList, int value)
{
	dNode  *p, *q;                          //定义两个dNode*型的指针，p在前，q在后（紧挨）

	for (q = NULL, p = pList->head; p; q = p, p = p->next) {
		//初始化q为NULL，p为head，不符合条件（p不为空）时，q先移动，p再移动
		if (p->data.a == value) {

			if (q)							//注意，当想要删除第一个节点时，要对q进行保护
				q->next = p->next;			//将NULL赋值给其他指针是很危险的
			else
				pList->head = p->next;

			free(p);						//最后要记得FREE

			break;
		}
	}
	printf("Successfully delete !\n\n");

	return;
}

int main(void)
{
	int value , loindex , numtofind , ordnum , _value ;
	
	List list1;

	list1.head = list1.tail = NULL;

	element E;

	E.a = 0;
	
	printf("To create a double linked list ,please input the number(with -1 end):\n");

	while (scanf("%d", &E.a)) {            //输入数据

		if (E.a == -1)                     //input = -1 时停止
			break;
		else
			create_dNode(&list1, &E);         //调用create函数 
	}

	print_dNode(&list1);                      //打印函数

	
	printf("\nPlease input the value you want to add and the location index:\n");

	scanf("%d", &value);
																//插入结点函数
	scanf("%d", &loindex);

	insert_dNode(&list1, loindex, value);

	print_dNode(&list1);


	printf("Input number you want to find\n");            //查找值函数

	scanf("%d", &numtofind);

	find_dNode(&list1, numtofind);


	printf("To get value ,input the order number\n");     //序号->值函数

	scanf("%d", &ordnum);

	get_dNode(&list1, ordnum);
	

	printf("Input which number do you want to delete\n");   //删除函数

	scanf("%d", &_value);

	delete_dNode(&list1, _value);

	print_dNode(&list1);


	dNode * p, *q;

	for (p = list1.head; p; p = q) {                    //清除链表

		q = p->next;

		free(p);
	}

	return 0;
}