#include<stdio.h>



//������c
typedef struct Data//��Ӹ�������
{
	int num;//ѧ��
	char name[20];//����
	//float math;//��ѧ�ɼ�
	
}DATA;

//�ڵ�
typedef struct Node
{
	struct Node* pnext;//pnext 
	DATA data;//������Ķ���
}NODE;

//����
typedef struct List
{
	NODE *phead;
	NODE *ptail;
	int cd;//����

}LIST;
