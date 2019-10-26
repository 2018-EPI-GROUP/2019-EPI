
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

typedef struct Stu
{
	int		num;			//学号
	char	name[20];		//姓名
	float	math;			//数学成绩
	struct Stu* pnext;		//指向像一个结点的指针
}STU;   //结构的别名
typedef STU* PSTU;  //PSTU 结构体指针类型


PSTU CreateList()
{

	PSTU pStu = (PSTU)malloc(sizeof(STU));
	if (pStu == NULL)
		return NULL;

	//填充数据
	pStu->pnext = NULL;

	//返回
	return pStu;
}

void OpenFile(PSTU pStu, char *filename)
{
	FILE *fp;
	char ch;
	PSTU pnew = NULL;

	while (1)
	{
		printf("\t\t\t请输入文件名:");
		scanf("%s", filename);
		if ((fp = fopen(filename, "r")) == NULL) //不存在
		{
			printf("\t\t\t文件不存在！是否需要创建？（y/n）");
			fflush(stdin);
			scanf("%c", &ch);
			if (ch == 'y' || ch == 'Y')
			{
				if ((fp = fopen(filename, "a+")) == NULL)  //失败
				{
					printf("创建失败!");
					return;
				}
				else
				{
					printf("\t\t\t创建成功！按任意键继续...");
					getch();
					break;
				}
			}
			else if (ch == 'n' || ch == 'N')
			{
				continue;
			}
		}
		else
			break;
	}
	while (1)
	{
		pnew = (PSTU)malloc(sizeof(STU));
		if (fscanf(fp, "%d\t%s\t%f\n", &pnew->num, pnew->name, &pnew->math) == EOF)
		{
			free(pnew);
			break;
		}
		pnew->pnext = NULL; //新的节点的pnext 指向NULL
		pStu->pnext = pnew;
		pStu = pStu->pnext;
	}
	fclose(fp);
}
void Welcome()
{
	system("cls");
	printf("\n\n");
	printf("\t\t\t┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
	printf("\t\t\t┃         学生成绩管理系统                                       ┃\n");
	printf("\t\t\t┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫\n");
	printf("\t\t\t┃        1.添加学员		                                        ┃\n");
	printf("\t\t\t┃        2.查找学员		                                        ┃\n");
	printf("\t\t\t┃        3.删除学员		                                        ┃\n");
	printf("\t\t\t┃        4.修改信息		                                        ┃\n");
	printf("\t\t\t┃        5.退出系统		                                        ┃\n");
	printf("\t\t\t┃                                                                ┃\n");
	printf("\t\t\t┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
}


void Modify(PSTU pStu)
{
	char name[20];
	char ch;
	printf("\t 请输入需要修改的姓名：");
	scanf("%s", name);

	pStu = pStu->pnext;
	while (pStu != NULL)
	{
		if (strcmp(name, pStu->name) == 0)
		{
			printf("\t学号   姓名 数学\n");
			printf("\t%d  \t%s  \t%.3f  \n", pStu->num, pStu->name, pStu->math);
			printf("\t是否修改？(y/n)");
			fflush(stdin);
			scanf("%c", &ch);
			if (ch == 'y' || ch == 'Y')
			{
				printf("\t请输入分数：");
				scanf("%f", &pStu->math);
				printf("\t修更改成功，任意键继续...");
				getch();
				break;
			}
			else if (ch == 'n' || ch == 'N')
			{
				break;
			}
		}
		else
		{
			pStu = pStu->pnext;
		}
	}
}

void SaveData(PSTU pStu, char*filename)
{

	FILE *fp;
	pStu = pStu->pnext;
	if ((fp = fopen(filename, "w")) == NULL)
	{
		printf("\t保存不成功");
	}
	else
	{
		while (pStu != NULL)
		{
			fprintf(fp, "%d\t%s\t%f\n", pStu->num, pStu->name, pStu->math);
			pStu = pStu->pnext;
		}
	}
	fclose(fp);
}

int main()
{
	int choice = 0;
	PSTU pStu = NULL;
	FILE *fp = NULL;
	char filename[20];
	pStu = CreateList();
	OpenFile(pStu, filename);
	do{
		Welcome();
		printf("\t\t\t请选择：");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:break;
		case 2:break;
		case 3:break;
		case 4:
			Modify(pStu);
			break;
		case 5:
			SaveData(pStu, filename);
			break;
		}
	} while (choice != 5);

	return 0;
}