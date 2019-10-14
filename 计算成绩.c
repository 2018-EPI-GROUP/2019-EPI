#include <stdio.h>
#pragma warning(disable : 4996)
int main()
{
	int arr[5][3];
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	for (int i = 0; i < 5; i++)
	{
		int sum = 0;
		for (int j = 0; j < 3; j++)
		{
			sum += arr[i][j];
		}
		printf("第%d名学生的总成绩为: %d\t 平均成绩为:%d\n", i + 1, sum, sum / 3);
	}
	for (int i = 0; i < 3; i++)
	{
		int sum = 0;
		for (int j = 0; j < 5; j++)
		{
			sum += arr[j][i];
		}
		printf("第%d门功课的总成绩为：%d\t 平均成绩 :%d\n", i + 1, sum, sum / 5);
	}
	return 0;
}