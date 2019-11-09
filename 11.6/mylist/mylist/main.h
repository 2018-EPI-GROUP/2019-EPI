#include<stdio.h>



//数据域c
typedef struct Data//添加各种数据
{
	int num;//学号
	char name[20];//名字
	//float math;//数学成绩
	
}DATA;

//节点
typedef struct Node
{
	struct Node* pnext;//pnext 
	DATA data;//数据域的对象
}NODE;

//链表
typedef struct List
{
	NODE *phead;
	NODE *ptail;
	int cd;//长度

}LIST;
