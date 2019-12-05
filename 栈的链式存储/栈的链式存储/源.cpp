//创建链式结构存储的栈，并实现push，pop操作

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"head.h"

/*
typedef struct {
	int a;
}element;

typedef struct snode{
	element data;                //数据域
	struct snode* next;			 //指针域
}sNode ;

typedef struct _list {			//创建包含  指向一个链表头尾的指针  的结构体
	sNode * top;                //栈顶
	sNode * tail;				
}List;
*/



void* push_sNode(List *pList, int number)       //头插法   
{
	//List *pList 的原因是传进来的时一个  指向List结构类型的指针  ，*一下表示该指针


	sNode *p = (sNode*)malloc(sizeof(sNode));       //创建一个新结点

	p->data.a = number;                      //给新结点的data赋值     

	p->next = NULL;                          //初始化新结点的指针

	if (!pList->top && !pList->tail) {

		pList->top = p;                 //创建头结点 

		pList->tail = p;
	}
	else {

		p->next = pList->top;

		pList->top = p;
	}
//	printf("Successfully push!");

	return 0;
}


element * pop_sNode(List * pList)
{
	element* a = (element*)malloc(sizeof(element));

	*a = pList->top->data;

	sNode* tem;

	tem = pList->top->next;

	free(pList->top);

	pList->top = tem;

	return  a;
}

void print_sNode(List *pList)                        //打印函数
{
	sNode *p;

	printf("\nLinked list now is:\n");

	for (p = pList->top; p; p = p->next) {

		printf("%d\n", p->data.a);
	}
	printf("\n");
}

int get_sNode(List *pList, int input)                  //序号->值函数
{
	int i = 1;

	sNode *p;

	for (p = pList->top; p; p = p->next, i++) {

		if (i == input) {

			printf("The %dth number is %d\n\n", input, p->data.a);

			break;
		}
	}
	return p->data.a;
}

int main(void)
{
	int number, ordnum, numtofind, _value;

	List  list1;          ////创建一个包含  指向一个链表头尾的指针  的结构体

	list1.top = list1.tail = NULL;    //初始化其头结点

	printf("To create a Stack linked list ,please input the number(with -1 end):\n");

	while (scanf("%d", &number)) {            //输入数据

		if (number == -1)                     //input = -1 时停止
			break;
		else
			push_sNode(&list1, number);         //调用create函数 
	}


	print_sNode(&list1);                     //打印函数



	while (1) {

		char ans[5];

		int number,num;

		printf("\nWhat do you want to do?Input number to choose.\n");
		printf("push----------------------1\n");
		printf("pop-----------------------2\n");
		printf("print---------------------3\n");

		printf("Quit---------------------88\n\n");

		scanf("%d", &number);

		if (number == 1) {

			printf("Input the data\n");         
				
			scanf("%d", &num);			//输入数据

			push_sNode(&list1, num);         //调用PUSH函数 
			
			print_sNode(&list1);
		}
/*
			printf("Do you want to push another?(yes/no)\n");

			scanf("%s", &ans);

			if (strcmp(ans, "no") == 0)
				break;
*/				
		else if (number == 2) {
			while (1) {
				element tem = *( pop_sNode(&list1) );

				printf("出栈的数据是%d\n" , tem.a);
				
				printf("Do you want to pop another?(yes/no)\n");

				scanf("%s", &ans);

				if (strcmp(ans, "no") == 0)
					break;
			}
		}
		else if (number == 3) {
			print_sNode(&list1);
		}
		else
			break;
	}


	printf("To get value ,input the order number\n");     //序号->值函数

	scanf("%d", &ordnum);

	get_sNode(&list1, ordnum);


	sNode * p, *q;

	for (p = list1.top; p; p = q) {                    //清除链表

		q = p->next;

		free(p);
	}

	system("pause");

	return 0;
}