#include"main.h"
#include<stdlib.h>
#include<string.h>

/*
    ��Ź��̣�

   1.��������:
       malloc->stdlib.h
	   1.���ٿռ�.
	   2.�ж��Ƿ񿪱ٳɹ�.  ��Ҫ���жϺ���
	   3.�������ʼ��.

   2.�����ڵ�:
       1.��һ���ڵ�.
	   2.��Ҫ�ȸ�ֵ.

   3.���ӣ����ӣ��ڵ�:

   4.����������ѧ�ĺ�����:

   5.�������:

   6.ɾ����������һ��������:


   ���ֵ����⣺ע�ⶨ����Ⱥ��Լ����˳��phead��ptail ָ��NODE
   void(*Travel)(NODE *pnode)Ϊ����ָ��
*/

//���⺯��
int Estimate(LIST *plist)
{
	if (plist->cd == 0 && plist->phead == NULL&&plist->ptail == NULL)
		return 0;//����ʧ�� kong
	else
		return 1;//���ٳɹ�
}

////��Ҫ��������Ϣ
int ShowMes(int mates)
{
	
	return mates;
}

//1.��������
LIST* CreatList()
{
	LIST *plist = (LIST*)malloc(sizeof(LIST));//LIST* �Ƿ���һ��ָ�룬ָ��LIST

	//������Ҫ�ж��Ƿ񴴽��ɹ�
	if (Estimate(plist) == 0)//����ʧ��
	{
		printf("�Բ��𣬿����ڴ�ʧ�ܣ�\n");//�������� ֱ�����ٳɹ�
	}
	else
	{
		printf("�༶��Ϣ�ļ��д����ɹ�\n");
		printf("�ǿ�ʼ�������ǰ����Ϣ��\n");
		plist->cd = 0;//����Ϊ0
		plist->phead = NULL;//ͷָ��ָ���
		plist->ptail = NULL;//βָ��ָ���
	}
	return plist;//���»�ȡָ��
}

//2.�����ڵ�:
NODE* CreatNode()
{
	NODE *pnode = (NODE*)malloc(sizeof(NODE));
	
	printf("���������֣�\n");
	scanf("%s", pnode->data.name);
	printf("������ѧ�ţ�\n");
	scanf("%d", &pnode->data.num);
	/*printf("��������ѧ�ɼ���\n");
	scanf("%f",&pnode->data.math);*/

	return pnode;
}

//3.���ӣ����ӣ��ڵ�:
void LinkList(LIST* plist, NODE *pnode)//��Ҫ������plist ��pn
{
	if (Estimate(plist) == 0)//����Ϊ��:���̿�ͼ
	{
		plist->phead = pnode;
		plist->ptail = pnode;
		plist->cd++;
	}
	else//��Ϊ��
	{
		plist->ptail->pnext = pnode;
		plist->ptail = pnode;
		plist->cd++;
	}
}

//4.����������ѧ�ĺ�����:
void Process(LIST *plist, void(*Travel)(NODE *pnode))//����,��Ҫ������plist,��ʱ��pt//void(*Travel)(NODE *pnode)
{
	NODE *pt = plist->phead;//�ӵ�һ���ڵ㿪ʼ
	int length = plist->cd;
	
	while (length)
	{
		Travel(pt);
		//printf("������%s\tѧ�ţ�%d\t\n", pt->data.name, pt->data.num);
		pt = pt->pnext;
		length--;
	}

}

//5.�������:
void ShowData(NODE *pnode)
{
	printf("������%s\tѧ�ţ�%d\t��ѧ�ɼ���%f\n", pnode->data.name, pnode->data.num);
}

//////////6.ɾ����������һ��������:�ȱ����ɾ��
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

//�ض����:���jjl����Ϣ
void Special(NODE *pnode)
{
	//printf("����鿴˭����Ϣ��\n");
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
	printf("���ǰ��м����˰���\n");
	scanf("%d", &mates);
	for (int i = 0; i < mates; i++)
	{
		LinkList(plist, CreatNode());
	}
		
	//�������	
	Process(plist,ShowData);
	
	//ɾ������
	NODE *pnode1 = (NODE*)malloc(sizeof(NODE));
	int time = 0;
	printf("����ɾ������������ͷ��ʼɾ����\n");

	scanf("%d", &time);
	while (time)
	{
		DeleteData(plist, pnode1);
		time--;
	}
	
	//�ٴ����
	Process(plist,ShowData);

	//�ض����
	printf("�����޾��ĵ���Ϣ�\n");
	printf("��Ͱ�1\t����Ͱ�2\n");
	int n;
	scanf("%d", &n);
	if (n == 1)
	{
		printf("�ܺã�������Ϣ�ǣ���������\n");
		Process(plist, Special);
		//�ٴ����
		Process(plist, ShowData);

	}
	else
		printf("�ټ��ˣ�����");


}