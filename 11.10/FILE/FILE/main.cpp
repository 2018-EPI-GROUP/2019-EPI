#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

/*
        ��������:
     1.��������.
	    1.����ṹ��.
	    2.��ͷ�ڵ�����.
		   1.ͬ����Ҫ��ʼ��.
		
	 2.���ļ�.
	    1.���û�оʹ���.
		2.��ȡ����,���浽������.
	    
	 3.��ȡ�ļ�.
	    1.�ȴ����ڵ�.
		2.���ӽڵ�.

	 4.���ù���.
	    1.����ѧ��:
	    2.���ѧ��:
		3.ɾ����Ϣ:
		4.�޸���Ϣ:Modify()
		   1.��Ҫһ����ʱ�����ӵڶ����ڵ㿪ʼ��
		5.�˳�ϵͳ:
		   1.��������.//��ʱ�����ӵڶ�����ʼ
		   2.break.
	   
*/

//1.��������.
typedef struct Stu 
{
	char name[20];//����
	int  number;//ѧ��
	float math;//��ѧ�ɼ�
	struct Stu *pnext;
}STU;
typedef STU* PSTU;//ָ��ṹ������ͣ�PSTUΪ�ṹ������

//����

PSTU CreatList()
{
	PSTU plist = (PSTU)malloc(sizeof(STU));

	if (plist == NULL) //�����ڴ�ʧ��
		return NULL;
	//��ʼ��
	plist->pnext = NULL;

	return plist;
}

// 2.���ļ�.
void OpenFile(PSTU plist, char *filename)
{
	FILE *fp;
	char ch;
	PSTU pt = NULL;
	
	while (1)
	{
		printf("\t\t\t�������ļ�����");
		scanf("%s", filename);//ע�ⲻ�ܼ�&
		if ((fp = fopen(filename, "r")) == NULL)//��ʧ��
		{
			printf("\t\t\t�ļ�����ʧ�ܣ�\n");
			printf("\t\t\t�Ƿ�Ҫ����һ���ļ���\n\t\t\t(yes/no):");
			fflush(stdin);
			scanf("%c", &ch);
			if (ch == 'yes' || ch == 'y' || ch == 'Y' || ch == 'YES')
			{
				if ((fp = fopen(filename, "a+")) == NULL)
				{
					printf("ʧ���˰�����\n");
				}
				else
				{
					printf("\t\t\t�����ɹ��������������...");
					getch();
					break;
				}
			}
			else //if (ch == 'no' || ch == 'n' || ch == 'N' || ch == 'NO')
			{
				printf("����ʧ�ܣ������������������\n");
				getch();//��ȡ����,��ͷ�ļ�conio.h��
			}
		}
		else//�򿪳ɹ����Ͳ���Ҫ����.
		{
			printf("�򿪳ɹ���\n");
			printf("�����������������\n");
			getch();
			break;
		}
		   
	}
	
	//�ļ���ȡ�ɹ�����Ҫ�������ݣ��ȹ�Ӷһ����ʱ����
	/* 3.��ȡ�ļ�.
	1.�ȴ����ڵ�.
		2.���ӽڵ�.*/
	while (1)
	{
		PSTU pt = (PSTU)malloc(sizeof(STU));//���ٺ󣬷��ʣ�ֱ��������

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

//�޸���Ϣ
void Modify(PSTU pt)
{
	char name[20];
	char ch;
	pt = pt->pnext;//��һ���ڵ�û���ݣ�������ָ��ڶ���

	printf("��������Ҫ�޸ĵ�ͬѧ������/ѧ��\n");
	scanf("%s", name);
	while (pt!=NULL)
	{
		if (strcmp(name, pt->name) == 0)//���ҵ���Ӧ����
		{
			//����
			printf("\t\t\tѧ��\t����\t��ѧ\n");
			printf("\t\t\t%s\t%d\t%f", pt->name, pt->number, pt->math);
			printf("\t\t\t�Ƿ��޸ģ�(yes/no)");
			fflush(stdin);
			scanf("%c", &ch);
			if (ch == 'yes' || ch == 'y' || ch == 'Y' || ch == 'YES')
			{
				printf("\t\t\t�������µķ�����");
				scanf("%f", &pt->math);
				printf("�޸ĳɹ��������������....");
				getch();
			}
			else if(ch == 'no' || ch == 'n' || ch == 'N' || ch == 'NO')//no
			{
				printf("�޸�ʧ�ܣ������������...");
				getch();
				break;
			}
		}
		else
		{
			pt = pt->pnext;//����
		}

	}

}

//��������
void SaveData(PSTU plist,char *filename)//��ʱ��
{
	FILE *fp;
	plist = plist->pnext;//�ӵ�һ����ʼ
	if ((fp = fopen(filename, "w")) == NULL)
	{
		printf("��ʧ�ܣ�");
	}
	else
	{
		while (plist!=NULL)
		{
			fprintf(fp, "%s\t%d\t%.2f", plist->name, plist->number, plist->math);//д��fp,��xx��ʽ������
			plist = plist->pnext;//����
		}
	}
	fclose(fp);
}
//����
void Welcome()
{
	system("cls");
	printf("\n\n");
	printf("\t\t����������������������������������������������������������������\n");
	printf("\t\t��      ��ѧ���ɼ�����ϵͳ��    ��  \n");
	printf("\t\t����������������1.����ѧ������������������������������\n");
	printf("\t\t����������������2.���ѧ������������������������������\n");
	printf("\t\t����������������3.ɾ����Ϣ����������������������������\n");
	printf("\t\t����������������4.�޸���Ϣ����������������������������\n");
	printf("\t\t����������������5.�˳�ϵͳ����������������������������\n");
	printf("\t\t����������������������������������������������������������������\n");
	printf("\t\t����������������������������������������������������������������\n");
}
int main()
{
	int choice = 0;;

	PSTU plist = NULL;//����һ��ָ��ṹ���ָ��
	char filename[20];
	//��������
	plist = CreatList();
	OpenFile(plist, filename);
	do
	{
		Welcome();
		printf("\t\t\t�����ʲô����ѡ��\n"); 
		scanf_s("%d", &choice);
		switch (choice)
		{
		case1://1.����ѧ��
			break;
		case2://2.���ѧ��
			break;
		case3://3.ɾ����Ϣ
			break;
		case4:
			Modify(plist);
			//4.�޸���Ϣ
			break;
		case5://5.�˳�ϵͳ����Ҫ�������ݡ�
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
//		printf("�ļ���ʧ�ܣ�\n");
//	}
//	else
//	{
//		printf("�ļ��򿪳ɹ�!\n");
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
//	//��ȡ
//	/*do
//	{
//		ch = fgetc(fp);
//		printf("%c", ch);
//
//	} while (ch != EOF);*/
//	/*fputs(ch, fp);
//	char str[20];
//	fgetc(fp);*///һ���ַ�
//	/*fgets(str, 5, fp);*/
//	//FILE *fp;
//	///*if ((fp = fopen("VIP1.txt", "w")) == NULL)
//	//{
//	//	printf("�ļ�����ʧ��!");
//	//}
//	//else
//	//{
//
//	//	printf("�ļ������ɹ�!\n");
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