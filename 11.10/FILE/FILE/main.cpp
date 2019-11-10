#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

/*
        大致流程:
     1.创建链表.
	    1.定义结构体.
	    2.空头节点链表.
		   1.同样需要初始化.
		
	 2.打开文件.
	    1.如果没有就创建.
		2.读取数据,保存到链表里.
	    
	 3.读取文件.
	    1.先创建节点.
		2.连接节点.

	 4.设置功能.
	    1.查找学生:
	    2.添加学生:
		3.删除信息:
		4.修改信息:Modify()
		   1.需要一个临时工，从第二个节点开始。
		5.退出系统:
		   1.保存数据.//零时工，从第二个开始
		   2.break.
	   
*/

//1.创建链表.
typedef struct Stu 
{
	char name[20];//名字
	int  number;//学号
	float math;//数学成绩
	struct Stu *pnext;
}STU;
typedef STU* PSTU;//指向结构体的类型，PSTU为结构体名字

//链表

PSTU CreatList()
{
	PSTU plist = (PSTU)malloc(sizeof(STU));

	if (plist == NULL) //开辟内存失败
		return NULL;
	//初始化
	plist->pnext = NULL;

	return plist;
}

// 2.打开文件.
void OpenFile(PSTU plist, char *filename)
{
	FILE *fp;
	char ch;
	PSTU pt = NULL;
	
	while (1)
	{
		printf("\t\t\t请输入文件名：");
		scanf("%s", filename);//注意不能加&
		if ((fp = fopen(filename, "r")) == NULL)//打开失败
		{
			printf("\t\t\t文件查找失败！\n");
			printf("\t\t\t是否要创建一个文件？\n\t\t\t(yes/no):");
			fflush(stdin);
			scanf("%c", &ch);
			if (ch == 'yes' || ch == 'y' || ch == 'Y' || ch == 'YES')
			{
				if ((fp = fopen(filename, "a+")) == NULL)
				{
					printf("失败了啊！！\n");
				}
				else
				{
					printf("\t\t\t创建成功！按任意键继续...");
					getch();
					break;
				}
			}
			else //if (ch == 'no' || ch == 'n' || ch == 'N' || ch == 'NO')
			{
				printf("创建失败，按任意键继续。。。\n");
				getch();//获取按键,再头文件conio.h中
			}
		}
		else//打开成功，就不需要创建.
		{
			printf("打开成功！\n");
			printf("按任意键继续。。。\n");
			getch();
			break;
		}
		   
	}
	
	//文件获取成功，需要保存数据（先雇佣一个零时工）
	/* 3.读取文件.
	1.先创建节点.
		2.连接节点.*/
	while (1)
	{
		PSTU pt = (PSTU)malloc(sizeof(STU));//开辟后，访问，直到结束，

		if ((fscanf(fp, "%s\t%d\t%.2f", &pt->name, &pt->number, &pt->math)) == EOF)
		{
			free(pt);
			break;
		}
		pt->pnext = NULL;
		plist->pnext = pt;
		plist = plist->pnext;
	}
	
	fclose(fp);
	
}

//修改信息
void Modify(PSTU pt)
{
	char name[20];
	char ch;
	pt = pt->pnext;//第一个节点没数据，所以先指向第二个

	printf("请输入需要修改的同学的名字/学号\n");
	scanf("%s", name);
	while (pt!=NULL)
	{
		if (strcmp(name, pt->name) == 0)//先找到对应的人
		{
			//界面
			printf("\t\t\t学号\t姓名\t数学\n");
			printf("\t\t\t%s\t%d\t%f", pt->name, pt->number, pt->math);
			printf("\t\t\t是否修改？(yes/no)");
			fflush(stdin);
			scanf("%c", &ch);
			if (ch == 'yes' || ch == 'y' || ch == 'Y' || ch == 'YES')
			{
				printf("\t\t\t请输入新的分数：");
				scanf("%f", &pt->math);
				printf("修改成功！按任意键返回....");
				getch();
			}
			else if(ch == 'no' || ch == 'n' || ch == 'N' || ch == 'NO')//no
			{
				printf("修改失败！按任意键返回...");
				getch();
				break;
			}
		}
		else
		{
			pt = pt->pnext;//遍历
		}

	}

}

//保存数据
void SaveData(PSTU plist,char *filename)//零时工
{
	FILE *fp;
	plist = plist->pnext;//从第一个开始
	if ((fp = fopen(filename, "w")) == NULL)
	{
		printf("打开失败！");
	}
	else
	{
		while (plist!=NULL)
		{
			fprintf(fp, "%s\t%d\t%.2f", plist->name, plist->number, plist->math);//写入fp,以xx格式，数据
			plist = plist->pnext;//遍历
		}
	}
	fclose(fp);
}
//界面
void Welcome()
{
	system("cls");
	printf("\n\n");
	printf("\t\t┌──────────────────────────────┐\n");
	printf("\t\t├      ·学生成绩管理系统·    ┤  \n");
	printf("\t\t├───────1.查找学生─────────────┤\n");
	printf("\t\t├───────2.添加学生─────────────┤\n");
	printf("\t\t├───────3.删除信息─────────────┤\n");
	printf("\t\t├───────4.修改信息─────────────┤\n");
	printf("\t\t├───────5.退出系统─────────────┤\n");
	printf("\t\t├──────────────────────────────┤\n");
	printf("\t\t└──────────────────────────────┘\n");
}
int main()
{
	int choice = 0;;

	PSTU plist = NULL;//定义一个指向结构体的指针
	char filename[20];
	//创建链表
	plist = CreatList();
	OpenFile(plist, filename);
	do
	{
		Welcome();
		printf("\t\t\t你想干什么？请选择！\n"); 
		scanf_s("%d", &choice);
		switch (choice)
		{
		case1://1.查找学生
			break;
		case2://2.添加学生
			break;
		case3://3.删除信息
			break;
		case4:
			Modify(plist);
			//4.修改信息
			break;
		case5://5.退出系统，需要保存数据。
			break;

		}
	} while (choice != 5);
	
	return 0;
}





















//#include<stdio.h>
//
//int main()
//{
//	FILE *fp;
//	if ((fp = fopen("VIP1.txt", "a+"))==NULL)
//	{
//		printf("文件打开失败！\n");
//	}
//	else
//	{
//		printf("文件打开成功!\n");
//	}
//
//	fprintf()
//
//	//char str[20];
//	//fgets(str,14, fp);
//	//printf("%s\n", str);
//	///*fread(str, 2, 7, fp);
//	//printf("%s\n", str);*/
//	//fwrite(str, 3, 5, fp);
//	//printf("%s\n", fp);
//	//读取
//	/*do
//	{
//		ch = fgetc(fp);
//		printf("%c", ch);
//
//	} while (ch != EOF);*/
//	/*fputs(ch, fp);
//	char str[20];
//	fgetc(fp);*///一个字符
//	/*fgets(str, 5, fp);*/
//	//FILE *fp;
//	///*if ((fp = fopen("VIP1.txt", "w")) == NULL)
//	//{
//	//	printf("文件创建失败!");
//	//}
//	//else
//	//{
//
//	//	printf("文件创建成功!\n");
//	//	fprintf(fp, "jiayou!");
//	//}*/
//	//fp = fopen("VIP1.txt", "w+");
//	//fprintf(fp, "jiayou! ");
//	//char str[20] = {0};
//	//fgets(str, 10, fp);
//	//printf("%s", str);
//
//	fclose(fp);
//	return 0;
//}