#include<stdio.h>
#include<stdlib.h>

typedef struct Data//������
{
	char name[20];//����
	int num;//ѧ��

}DATA;

typedef struct Node//�ڵ�
{
	DATA data;//����
	struct Node *pnext;//ָ����
	void(*Init)(void);
}NODE;

typedef struct List//��������
{
	NODE *phead;
	NODE *ptail;
	int len;
}LIST;
