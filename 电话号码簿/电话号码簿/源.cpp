//���� �޸� ɾ��node����Ԫ�ز���node

#include"head.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void *create_sNode(List *pList)       //β�巨   
{
	//List *pList ��ԭ���Ǵ�������ʱһ��  ָ��List�ṹ���͵�ָ��  ��*һ�±�ʾ��ָ��

	int number;

	sNode *p = (sNode*)malloc(sizeof(sNode));       //����һ���½��

	printf("��������\n");

	scanf("%s", p->data.name);

	printf("����绰����\n");

	scanf("%s", p->data.tel);

	printf("����סַ\n");

	scanf("%s", p->data.add);
		
	p->next = NULL;                          //��ʼ���½���ָ��

	if (!pList->head && !pList->tail) {

		pList->head = p;                 //����ͷ��� 

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

	printf("��������\n");

		scanf("%s", p->data.name);	
				
	printf("����绰����\n");

		scanf("%s", p->data.tel);

	printf("����סַ\n");

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

	printf("������%s\n", p->data.name);

	printf("�绰��%s\n", p->data.tel);

	printf("סַ��%s\n\n", p->data.add);
}

void delete_sNode(List * pList)
{
	sNode  *p, *q;                          //��������sNode*�͵�ָ�룬p��ǰ��q�ں󣨽�����

	printf("input the name of contact you want to delete\n");

	char _name[10];

	scanf("%s", &_name);

	for (q = NULL, p = pList->head; p; q = p, p = p->next) {
		//��ʼ��qΪNULL��pΪhead��������������p��Ϊ�գ�ʱ��q���ƶ���p���ƶ�
		if (strcmp(p->data.name ,_name) == 0) {

			if (q)							//ע�⣬����Ҫɾ����һ���ڵ�ʱ��Ҫ��q���б���
				q->next = p->next;			//��NULL��ֵ������ָ���Ǻ�Σ�յ�
			else
				pList->head = p->next;

			free(p);						//���Ҫ�ǵ�FREE

			break;
		}
	}
	printf("Successfully delete !\n\n");

	return;
}

void print_sNode(List *pList)                        //��ӡ����
{
	sNode *p;

	printf("\nTelephone directory now is:\n");

	for (p = pList->head; p; p = p->next) {

		printf("������%s\n", p->data.name);

		printf("�绰��%s\n", p->data.tel);

		printf("סַ��%s\n\n", p->data.add);
	}
	printf("\n");
}

int main(void)
{
	long int i;

	char ans[5];

	int number;

	List  list1;          ////����һ������  ָ��һ������ͷβ��ָ��  �Ľṹ��

	list1.head = list1.tail = NULL;    //��ʼ����ͷ���

	printf("To create a Telephone directory , please input data:\n");
	while (1) {
		create_sNode(&list1);         //����create����

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
				create_sNode(&list1);         //����create����

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