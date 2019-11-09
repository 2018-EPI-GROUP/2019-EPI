#include<stdio.h>
#include<stdlib.h>

typedef struct Data//数据域
{
	char name[20];//名字
	int num;//学号

}DATA;

typedef struct Node//节点
{
	DATA data;//数据
	struct Node *pnext;//指针域
	void(*Init)(void);
}NODE;

typedef struct List//链表内容
{
	NODE *phead;
	NODE *ptail;
	int len;
}LIST;
