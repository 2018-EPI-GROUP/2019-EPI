#include<stdio.h>
#include<stdlib.h> //为库函数srand()提供原型 ，该函数用于获取随机数
#include<time.h>//time()函数原型
int random_num(void);//返回随机数
void rank_i(int* pt,int n);//排序
int main(void)
{
	int i;
	int num[100];

	srand((unsigned int)time(0));//将time()返回值time_t类型强制转化为unsigned int类型
	for (i = 0; i < 100; i++)
		num[i] = random_num();
	printf("未排序前：\n");

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
	printf("排序后\n");
	for (i = 0; i < n; i++)
	{
		printf("%-2d   ", pt[i]);
		if ((i + 1) % 10 == 0)
			printf("\n");
	}
}