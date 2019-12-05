//������ʽ�ṹ�洢��ջ����ʵ��push��pop����

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"head.h"

/*
typedef struct {
	int a;
}element;

typedef struct snode{
	element data;                //������
	struct snode* next;			 //ָ����
}sNode ;

typedef struct _list {			//��������  ָ��һ������ͷβ��ָ��  �Ľṹ��
	sNode * top;                //ջ��
	sNode * tail;				
}List;
*/



void* push_sNode(List *pList, int number)       //ͷ�巨   
{
	//List *pList ��ԭ���Ǵ�������ʱһ��  ָ��List�ṹ���͵�ָ��  ��*һ�±�ʾ��ָ��


	sNode *p = (sNode*)malloc(sizeof(sNode));       //����һ���½��

	p->data.a = number;                      //���½���data��ֵ     

	p->next = NULL;                          //��ʼ���½���ָ��

	if (!pList->top && !pList->tail) {

		pList->top = p;                 //����ͷ��� 

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

void print_sNode(List *pList)                        //��ӡ����
{
	sNode *p;

	printf("\nLinked list now is:\n");

	for (p = pList->top; p; p = p->next) {

		printf("%d\n", p->data.a);
	}
	printf("\n");
}

int get_sNode(List *pList, int input)                  //���->ֵ����
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

	List  list1;          ////����һ������  ָ��һ������ͷβ��ָ��  �Ľṹ��

	list1.top = list1.tail = NULL;    //��ʼ����ͷ���

	printf("To create a Stack linked list ,please input the number(with -1 end):\n");

	while (scanf("%d", &number)) {            //��������

		if (number == -1)                     //input = -1 ʱֹͣ
			break;
		else
			push_sNode(&list1, number);         //����create���� 
	}


	print_sNode(&list1);                     //��ӡ����



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
				
			scanf("%d", &num);			//��������

			push_sNode(&list1, num);         //����PUSH���� 
			
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

				printf("��ջ��������%d\n" , tem.a);
				
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


	printf("To get value ,input the order number\n");     //���->ֵ����

	scanf("%d", &ordnum);

	get_sNode(&list1, ordnum);


	sNode * p, *q;

	for (p = list1.top; p; p = q) {                    //�������

		q = p->next;

		free(p);
	}

	system("pause");

	return 0;
}