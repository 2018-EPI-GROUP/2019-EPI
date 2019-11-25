#include<stdio.h>
#include<stdlib.h>
#include"list.h"

/*
typedef struct {
	int a;
}element;

typedef struct snode{
	element data;
	struct snode* next;
}sNode , *linked_list;

typedef struct _list {
	sNode * head;                //创建包含  指向一个链表头尾的指针  的结构体
	sNode * tail;				 //这样做可以为后期升级提供更大空间
}List;
*/



void *add_sNode(List *pList , int number)       //尾插法   
{	
	//List *pList 的原因是传进来的时一个  指向List结构类型的指针  ，*一下表示该指针
	
	
	sNode *p= (sNode*)malloc(sizeof(sNode));       //创建一个新结点

	p->data.a = number;                      //给新结点的data赋值     

	p->next = NULL;                          //初始化新结点的指针

	if (!pList->head && !pList->tail) {
		
		pList->head = p ;                 //创建头结点 
		
		pList->tail = p ;
	}
	else {
		
		pList->tail->next = p ;
		
		pList->tail = p ;
	}
	return 0;
}

void print_sNode(List *pList)                        //打印函数
{
	sNode *p;

	for (p = pList->head ; p; p = p->next) {

		printf("%d\n", p->data.a);
	}
}

int get_sNode(List *pList , int input)                  //序号->值函数
{
	int i = 1;

	sNode *p;

	for (p = pList->head; p; p = p->next, i++) {

		if (i == input) {
			
			printf("%d\n", p->data.a);
			
			break;
		}
	}
	return p->data.a;
}

void find_sNode(List *pList , int _numtofind)               //查找值函数
{
	int i = 1 ,isfound = 0;

	sNode *p;

	for (p = pList->head; p; p = p->next, i++) {

		if (p->data.a == _numtofind) {

			printf("Eureka ! The order number is %d.\n", i);

			isfound = 1 ;

			break;
		}	
	}
	if(isfound = 0)
		printf("Fail to find it.\n");

	return;
}

void delete_sNode(List * pList, int value)
{
	sNode  *p ,*q ;                          //定义两个sNode*型的指针，p在前，q在后（紧挨）

	for ( q = NULL , p = pList->head ; p ; q =p , p = p->next) {
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
	return;
}

int main(void)
{
	int number , ordnum , numtofind , _value;
	
	List  list1;          ////创建一个包含  指向一个链表头尾的指针  的结构体

	list1.head = list1.tail = NULL;    //初始化其头结点

	while (scanf("%d", &number)) {            //输入数据

		if (number == -1)                     //input = -1 时停止
			break;
		else
			add_sNode(&list1,number);         //调用add函数 
	}
	

	print_sNode(&list1);                     //打印函数

	
	printf("To get value ,input the order number\n");     //序号->值函数

	scanf("%d", &ordnum);

	get_sNode(&list1, ordnum);

	
	printf("Input number you want to find\n");            //查找值函数

	scanf("%d", &numtofind);

	find_sNode(&list1, numtofind);

	
	printf("Input which number do you want to delete\n");   //删除函数
	
	scanf("%d", &_value);

	delete_sNode(&list1, _value);

	print_sNode(&list1);

	
	return 0;
}