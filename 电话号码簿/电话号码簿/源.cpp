//插入 修改 删除node，按元素查找node

#include"head.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void *create_sNode(List *pList)       //尾插法   
{
	//List *pList 的原因是传进来的时一个  指向List结构类型的指针  ，*一下表示该指针

	int number;

	sNode *p = (sNode*)malloc(sizeof(sNode));       //创建一个新结点

	printf("输入姓名\n");

	scanf("%s", p->data.name);

	printf("输入电话号码\n");

	scanf("%s", p->data.tel);

	printf("输入住址\n");

	scanf("%s", p->data.add);
		
	p->next = NULL;                          //初始化新结点的指针

	if (!pList->head && !pList->tail) {

		pList->head = p;                 //创建头结点 

		pList->tail = p;
	}
	else {

		pList->tail->next = p;

		pList->tail = p;
	}
	return 0;
}

void rewrite_sNode(List * pList)
{
	printf("input the name you want to rewrite\n");

	char _name[10];

	scanf("%s", &_name);

	sNode * p = pList->head;

	while (strcmp(p->data.name, _name) != 0)
		p = p->next;

	printf("输入姓名\n");

		scanf("%s", p->data.name);	
				
	printf("输入电话号码\n");

		scanf("%s", p->data.tel);

	printf("输入住址\n");

	scanf("%s", p->data.add);

	printf("Successfully rewrite!\n");
	
}

void find_sNode(List * pList)
{
	printf("input the name you want to find\n");

	char _name[10];

	scanf("%s", &_name);

	sNode * p = pList->head;

	while (strcmp(p->data.name , _name) != 0)
		p = p->next;

	printf("姓名：%s\n", p->data.name);

	printf("电话：%s\n", p->data.tel);

	printf("住址：%s\n\n", p->data.add);
}

void delete_sNode(List * pList)
{
	sNode  *p, *q;                          //定义两个sNode*型的指针，p在前，q在后（紧挨）

	printf("input the name of contact you want to delete\n");

	char _name[10];

	scanf("%s", &_name);

	for (q = NULL, p = pList->head; p; q = p, p = p->next) {
		//初始化q为NULL，p为head，不符合条件（p不为空）时，q先移动，p再移动
		if (strcmp(p->data.name ,_name) == 0) {

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

void print_sNode(List *pList)                        //打印函数
{
	sNode *p;

	printf("\nTelephone directory now is:\n");

	for (p = pList->head; p; p = p->next) {

		printf("姓名：%s\n", p->data.name);

		printf("电话：%s\n", p->data.tel);

		printf("住址：%s\n\n", p->data.add);
	}
	printf("\n");
}

int main(void)
{
	long int i;

	char ans[5];

	int number;

	List  list1;          ////创建一个包含  指向一个链表头尾的指针  的结构体

	list1.head = list1.tail = NULL;    //初始化其头结点

	printf("To create a Telephone directory , please input data:\n");
	while (1) {
		create_sNode(&list1);         //调用create函数

		printf("Do you want to input another?(yes/no)\n");

		scanf("%s", &ans);

		if (strcmp(ans, "no") == 0)
			break;
	}
	
	print_sNode(&list1);

	while (1) {
		printf("\nWhat do you want to do?Input number to choose.\n");
		printf("Add Contacts--------------------------1\n");
		printf("Delete Contacts-----------------------2\n");
		printf("Find Contacts-------------------------3\n");
		printf("Show the whole Telephone directory----4\n");
		printf("Rewrite Contacts----------------------5\n");
		printf("Quit----------------------------------6\n\n");

		scanf("%d", &number);
		if (number == 1) {
			while (1) {
				create_sNode(&list1);         //调用create函数

				printf("Do you want to input another?(yes/no)\n");

				scanf("%s", &ans);

				if (strcmp(ans, "no") == 0)
					break;
			}
		}
		else if (number == 2) {
			while (1) {
				delete_sNode(&list1);

				print_sNode(&list1);

				printf("Do you want to delete another?(yes/no)\n");

				scanf("%s", &ans);

				if (strcmp(ans, "no") == 0)
					break;
			}
		}
		else if (number == 3) {
			while (1) {
				find_sNode(&list1);

				printf("Do you want to find another?(yes/no)\n");

				scanf("%s", &ans);

				if (strcmp(ans, "no") == 0)
					break;
			}
		}
		else if (number == 4) {
			print_sNode(&list1);
		}
		else if (number == 5) {
			while (1) {
				rewrite_sNode(&list1);

				printf("Do you want to rewrite another?(yes/no)\n");

				scanf("%s", &ans);

				if (strcmp(ans, "no") == 0)
					break;
			}
		}
		else {
			break;
		}
	}
	system("pause");

	return 0;
}