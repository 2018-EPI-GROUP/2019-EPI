
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

typedef struct Stu
{
	int		num;			//ѧ��
	char	name[20];		//����
	float	math;			//��ѧ�ɼ�
	struct Stu* pnext;		//ָ����һ������ָ��
}STU;   //�ṹ�ı���
typedef STU* PSTU;  //PSTU �ṹ��ָ������


PSTU CreateList()
{
	
	PSTU pStu = (PSTU)malloc(sizeof(STU));
	if (pStu == NULL)
		return NULL;

	//�������
	pStu->pnext = NULL;

	//����
	return pStu;
}

void OpenFile(PSTU pStu, char *filename)  
{
	FILE *fp;
	char ch;
	PSTU pnew = NULL;

	while (1)
	{
		printf("\t\t\t�������ļ���:");
		scanf("%s", filename);
		if ((fp = fopen(filename, "r")) == NULL) //������
		{
			printf("\t\t\t�ļ������ڣ��Ƿ���Ҫ��������y/n��");
			fflush(stdin);
			scanf("%c", &ch);
			if (ch == 'y' || ch == 'Y')
			{
				if ((fp = fopen(filename, "a+")) == NULL)  //ʧ��
				{
					printf("����ʧ��!");
					return;
				}
				else
				{
					printf("\t\t\t�����ɹ��������������...");
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
		pnew->pnext = NULL; //�µĽڵ��pnext ָ��NULL
		pStu->pnext = pnew;
		pStu = pStu->pnext;
	}
	fclose(fp);
}
void Welcome()
{
	system("cls");
	printf("\n\n");
	printf("\t\t\t��������������������������������������������������������������������\n");
	printf("\t\t\t��         ѧ���ɼ�����ϵͳ                                       ��\n");
	printf("\t\t\t�ǩ�����������������������������������������������������������������\n");
	printf("\t\t\t��        1.���ѧԱ		                                        ��\n");
	printf("\t\t\t��        2.����ѧԱ		                                        ��\n");
	printf("\t\t\t��        3.ɾ��ѧԱ		                                        ��\n");
	printf("\t\t\t��        4.�޸���Ϣ		                                        ��\n");
	printf("\t\t\t��        5.�˳�ϵͳ		                                        ��\n");
	printf("\t\t\t��                                                                ��\n");
	printf("\t\t\t��������������������������������������������������������������������\n");
}


void Modify(PSTU pStu)
{
	char name[20];
	char ch;
	printf("\t ��������Ҫ�޸ĵ�������");
	scanf("%s", name);

	pStu = pStu->pnext;
	while (pStu != NULL)
	{
		if (strcmp(name, pStu->name) == 0)
		{
			printf("\tѧ��   ���� ��ѧ\n");
			printf("\t%d  \t%s  \t%.3f  \n", pStu->num, pStu->name, pStu->math);
			printf("\t�Ƿ��޸ģ�(y/n)");
			fflush(stdin);
			scanf("%c", &ch);
			if (ch == 'y' || ch == 'Y')
			{
				printf("\t�����������");
				scanf("%f", &pStu->math);
				printf("\t�޸��ĳɹ������������...");
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
		printf("\t���治�ɹ�");
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
		printf("\t\t\t��ѡ��");
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
