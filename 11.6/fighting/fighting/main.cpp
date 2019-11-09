#include"main.h"
#include<string.h>

int number = 0;//人数
//判读链表是否指向空
int BoolList(LIST *plist)//判读链表是否指向空
{
	if (plist->len== NULL&&plist->phead==NULL&&plist->ptail==NULL)
		return 1;
	else
		return 0;
}

//开辟链表:
LIST* CreatList()
{
	
	LIST *plist = (LIST*)malloc(sizeof(LIST));//开辟内存
	if (BoolList(plist) == 1)//判断
	{
		printf("内存开辟失败!\n");	
	}
	else
	{
		
		//初始化
		plist->len = 0;
		plist->phead = NULL;
		plist->ptail = NULL;
	}
	
	return plist;//返回一个指针，指向链表，所以用LIST？*
}
//创建节点
NODE* CreatNode()
{
	NODE *pnode = (NODE*)malloc(sizeof(NODE));
	printf("请输入名字：\n");
	scanf("%s", pnode->data.name);
	printf("请输入学号：\n");
	scanf("%d", &pnode->data.num);
	
	return pnode;
}

//增加(链接链表和新增)节点
void LinkList(LIST* plist,NODE *pnode)//看不懂看笔记
{
	//现在链表可能有两种情况
	//①：空
	if (BoolList(plist) == 1)
	{
		plist->phead = pnode;
		plist->ptail = pnode;
		plist->len++;
	}
	//②：不为空
	else
	{
		plist->ptail->pnext = pnode;//连接每个节点的线
		plist->ptail = pnode;//看图吧
		plist->len++;//可以相同的出去
	}
}

//遍历
//void Travel(LIST *plist)
//{
//	int a = plist->len;//节点个数
//	NODE * pt = plist->phead;//临时工pt，从头开始遍历
//	
//	while (a)
//	{
//		printf("名字:%s\t学号：%d", pt->data.name, pt->data.num);
//		pt = pt->pnext;
//		
//		a--;
//	}
//}
void Travel(LIST *plist)//,void(*Send)(NODE *pnode)
{
	int a = plist->len;//节点个数
	NODE * pt = plist->phead;//临时工pt，从头开始遍历

	while (a)
	{
		/*Send(pt);*/
		printf("名字:%s\t学号：%d\n", pt->data.name, pt->data.num);
		pt = pt->pnext;
		a--;
	}
}

void DeleteList(LIST *plist,NODE *pnode)
{
	
		NODE *pt = plist->phead;
		if (BoolList(plist) == 0)//不为空
		{
			//先保存再头部删除
			memcpy(pnode, pt, sizeof(NODE));
			plist->phead = plist->phead->pnext;
			plist->len--;
			if (plist->len == 0)
			{
				plist->ptail = NULL;
			}
		}
	
	

}
//外函数
//void Fun(NODE *pnode)
//{
//	printf("名字:%s\t学号：%d\n", pnode->data.name, pnode->data.num);
//}
//
//void ShowList(NODE *pnode)//想输出所有，得遍历
//{
//
//	printf("名字：%s\t学号：%d", pnode->data.name, pnode->data.num);
//
//}
void Process()//必要的文字
{
	
	printf("你班里有几个人?\n");
	scanf("%d", &number);
	printf("班级文件创建成功!\n");
	printf("那请输入他们的信息吧。\n");
}
int main()
{
	while (1)
	{
		Process();
		LIST* plist = CreatList();
		//NODE* pnode = CreatNode();//这个数据没连进去。。。（这鬼东西，，我要死了。。我tmd）

		for (int i = 0; i < number; i++)
		{
			LinkList(plist, CreatNode());
		}
		Travel(plist);


		NODE *pnode2 = (NODE*)malloc(sizeof(NODE));//这个是先保存了的
		int time = 0;
		printf("你想删除几个（从第一开始删除）\n");
		scanf("%d", &time);
		while (time)
		{
			DeleteList(plist, pnode2);
			time--;
		}

		//当然你可以给出不同指令，从尾部依次删除多少个？
		//或者指定删除第一个？
		//或者当满足什么条件时删除


		Travel(plist);

		//ShowList(pnode);//最后用遍历数组去实现
	
	}
	
	 getchar();
	return 0;
}