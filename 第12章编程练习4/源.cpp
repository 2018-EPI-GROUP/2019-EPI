#include<stdio.h>
#include<stdlib.h> //Ϊ�⺯��srand()�ṩԭ�� ���ú������ڻ�ȡ�����
#include<time.h>//time()����ԭ��
int random_num(void);//���������
void rank_i(int* pt,int n);//����
int main(void)
{
	int i;
	int num[100];

	srand((unsigned int)time(0));//��time()����ֵtime_t����ǿ��ת��Ϊunsigned int����
	for (i = 0; i < 100; i++)
		num[i] = random_num();
	printf("δ����ǰ��\n");

	for (i = 0; i < 100; i++)
	{
		printf("%-2d  ", num[i]);
		if ((i + 1) % 10 == 0)
			printf("\n");
	}
	rank_i(num, 100);

	return 0;
}

int random_num(void)
{
	int a;

	a = rand() % 10 + 1;

	return a;
}
void rank_i(int* pt, int n)
{
	int i, j, c;
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (pt[i] > pt[j])
			{
				c = pt[i];
				pt[i] = pt[j];
				pt[j] = c;
			}
		}
	}
	printf("�����\n");
	for (i = 0; i < n; i++)
	{
		printf("%-2d   ", pt[i]);
		if ((i + 1) % 10 == 0)
			printf("\n");
	}
}