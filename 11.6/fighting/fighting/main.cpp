#include"main.h"
#include<string.h>

int number = 0;//����
//�ж������Ƿ�ָ���
int BoolList(LIST *plist)//�ж������Ƿ�ָ���
{
	if (plist->len== NULL&&plist->phead==NULL&&plist->ptail==NULL)
		return 1;
	else
		return 0;
}

//��������:
LIST* CreatList()
{
	
	LIST *plist = (LIST*)malloc(sizeof(LIST));//�����ڴ�
	if (BoolList(plist) == 1)//�ж�
	{
		printf("�ڴ濪��ʧ��!\n");	
	}
	else
	{
		
		//��ʼ��
		plist->len = 0;
		plist->phead = NULL;
		plist->ptail = NULL;
	}
	
	return plist;//����һ��ָ�룬ָ������������LIST��*
}
//�����ڵ�
NODE* CreatNode()
{
	NODE *pnode = (NODE*)malloc(sizeof(NODE));
	printf("���������֣�\n");
	scanf("%s", pnode->data.name);
	printf("������ѧ�ţ�\n");
	scanf("%d", &pnode->data.num);
	
	return pnode;
}

//����(�������������)�ڵ�
void LinkList(LIST* plist,NODE *pnode)//���������ʼ�
{
	//��������������������
	//�٣���
	if (BoolList(plist) == 1)
	{
		plist->phead = pnode;
		plist->ptail = pnode;
		plist->len++;
	}
	//�ڣ���Ϊ��
	else
	{
		plist->ptail->pnext = pnode;//����ÿ���ڵ����
		plist->ptail = pnode;//��ͼ��
		plist->len++;//������ͬ�ĳ�ȥ
	}
}

//����
//void Travel(LIST *plist)
//{
//	int a = plist->len;//�ڵ����
//	NODE * pt = plist->phead;//��ʱ��pt����ͷ��ʼ����
//	
//	while (a)
//	{
//		printf("����:%s\tѧ�ţ�%d", pt->data.name, pt->data.num);
//		pt = pt->pnext;
//		
//		a--;
//	}
//}
void Travel(LIST *plist)//,void(*Send)(NODE *pnode)
{
	int a = plist->len;//�ڵ����
	NODE * pt = plist->phead;//��ʱ��pt����ͷ��ʼ����

	while (a)
	{
		/*Send(pt);*/
		printf("����:%s\tѧ�ţ�%d\n", pt->data.name, pt->data.num);
		pt = pt->pnext;
		a--;
	}
}

void DeleteList(LIST *plist,NODE *pnode)
{
	
		NODE *pt = plist->phead;
		if (BoolList(plist) == 0)//��Ϊ��
		{
			//�ȱ�����ͷ��ɾ��
			memcpy(pnode, pt, sizeof(NODE));
			plist->phead = plist->phead->pnext;
			plist->len--;
			if (plist->len == 0)
			{
				plist->ptail = NULL;
			}
		}
	
	

}
//�⺯��
//void Fun(NODE *pnode)
//{
//	printf("����:%s\tѧ�ţ�%d\n", pnode->data.name, pnode->data.num);
//}
//
//void ShowList(NODE *pnode)//��������У��ñ���
//{
//
//	printf("���֣�%s\tѧ�ţ�%d", pnode->data.name, pnode->data.num);
//
//}
void Process()//��Ҫ������
{
	
	printf("������м�����?\n");
	scanf("%d", &number);
	printf("�༶�ļ������ɹ�!\n");
	printf("�����������ǵ���Ϣ�ɡ�\n");
}
int main()
{
	while (1)
	{
		Process();
		LIST* plist = CreatList();
		//NODE* pnode = CreatNode();//�������û����ȥ�������������������Ҫ���ˡ�����tmd��

		for (int i = 0; i < number; i++)
		{
			LinkList(plist, CreatNode());
		}
		Travel(plist);


		NODE *pnode2 = (NODE*)malloc(sizeof(NODE));//������ȱ����˵�
		int time = 0;
		printf("����ɾ���������ӵ�һ��ʼɾ����\n");
		scanf("%d", &time);
		while (time)
		{
			DeleteList(plist, pnode2);
			time--;
		}

		//��Ȼ����Ը�����ָͬ���β������ɾ�����ٸ���
		//����ָ��ɾ����һ����
		//���ߵ�����ʲô����ʱɾ��


		Travel(plist);

		//ShowList(pnode);//����ñ�������ȥʵ��
	
	}
	
	 getchar();
	return 0;
}