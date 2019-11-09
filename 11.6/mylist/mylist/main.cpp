#include"main.h"
#include<stdlib.h>
#include<string.h>

/*
    大概过程：

   1.创建链表:
       malloc->stdlib.h
	   1.开辟空间.
	   2.判断是否开辟成功.  需要用判断函数
	   3.给链表初始化.

   2.创建节点:
       1.第一个节点.
	   2.需要先赋值.

   3.增加（连接）节点:

   4.遍历链表（用学的函数）:

   5.输出数据:

   6.删除链表（设置一个条件）:


   发现的问题：注意定义的先后以及完成顺序；phead和ptail 指向NODE
   void(*Travel)(NODE *pnode)为函数指针
*/

//额外函数
int Estimate(LIST *plist)
{
	if (plist->cd == 0 && plist->phead == NULL&&plist->ptail == NULL)
		return 0;//开辟失败 kong
	else
		return 1;//开辟成功
}

////必要的文字信息
int ShowMes(int mates)
{
	
	return mates;
}

//1.创建链表
LIST* CreatList()
{
	LIST *plist = (LIST*)malloc(sizeof(LIST));//LIST* 是返回一个指针，指向LIST

	//现在需要判断是否创建成功
	if (Estimate(plist) == 0)//开辟失败
	{
		printf("对不起，开辟内存失败！\n");//可以设置 直到开辟成功
	}
	else
	{
		printf("班级信息文件夹创建成功\n");
		printf("那开始输入你们班的信息吧\n");
		plist->cd = 0;//长度为0
		plist->phead = NULL;//头指针指向空
		plist->ptail = NULL;//尾指针指向空
	}
	return plist;//重新获取指针
}

//2.创建节点:
NODE* CreatNode()
{
	NODE *pnode = (NODE*)malloc(sizeof(NODE));
	
	printf("请输入名字：\n");
	scanf("%s", pnode->data.name);
	printf("请输入学号：\n");
	scanf("%d", &pnode->data.num);
	/*printf("请输入数学成绩：\n");
	scanf("%f",&pnode->data.math);*/

	return pnode;
}

//3.增加（连接）节点:
void LinkList(LIST* plist, NODE *pnode)//需要参数：plist 和pn
{
	if (Estimate(plist) == 0)//链表为空:过程看图
	{
		plist->phead = pnode;
		plist->ptail = pnode;
		plist->cd++;
	}
	else//不为空
	{
		plist->ptail->pnext = pnode;
		plist->ptail = pnode;
		plist->cd++;
	}
}

//4.遍历链表（用学的函数）:
void Process(LIST *plist, void(*Travel)(NODE *pnode))//遍历,需要参数：plist,零时工pt//void(*Travel)(NODE *pnode)
{
	NODE *pt = plist->phead;//从第一个节点开始
	int length = plist->cd;
	
	while (length)
	{
		Travel(pt);
		//printf("姓名：%s\t学号：%d\t\n", pt->data.name, pt->data.num);
		pt = pt->pnext;
		length--;
	}

}

//5.输出数据:
void ShowData(NODE *pnode)
{
	printf("姓名：%s\t学号：%d\t数学成绩：%f\n", pnode->data.name, pnode->data.num);
}

//////////6.删除链表（设置一个条件）:先保存后删除
void DeleteData(LIST *plist ,NODE *pnode1)
{
	NODE *pt= plist->phead;
	if (Estimate(plist) == 1)
	{
		memcpy(pnode1, pt, sizeof(NODE));
		plist->cd--;
		plist->phead = plist->phead->pnext;
		free(pt);
		if (plist->cd == 0)
		{
			plist->ptail = NULL;
		}
	}
}

//特定输出:输出jjl的信息
void Special(NODE *pnode)
{
	//printf("你想查看谁的信息？\n");
	// char ch;
	//scanf("%s", &ch);
	//if (strcmp(pnode->data.name, "jiuxia") == 0)
	//{

	//}
	if (strcmp(pnode->data.name, "jiuxia") == 0)
	{
		strcpy(pnode->data.name, "JIUXIA");
	}

}
int main()
{
	int mates = 0;
	LIST *plist = CreatList();
	//ShowMes(mates);
	printf("你们班有几个人啊？\n");
	scanf("%d", &mates);
	for (int i = 0; i < mates; i++)
	{
		LinkList(plist, CreatNode());
	}
		
	//输出数据	
	Process(plist,ShowData);
	
	//删除数据
	NODE *pnode1 = (NODE*)malloc(sizeof(NODE));
	int time = 0;
	printf("你想删除几个？（从头开始删除）\n");

	scanf("%d", &time);
	while (time)
	{
		DeleteData(plist, pnode1);
		time--;
	}
	
	//再次输出
	Process(plist,ShowData);

	//特定输出
	printf("你想修九夏的信息嘛？\n");
	printf("想就按1\t不想就按2\n");
	int n;
	scanf("%d", &n);
	if (n == 1)
	{
		printf("很好！他的信息是：啊哈哈：\n");
		Process(plist, Special);
		//再次输出
		Process(plist, ShowData);

	}
	else
		printf("再见了！！！");


}