#include<stdio.h>
#include<stdlib.h>
int random_num(void);

int main(void)
{
	int i, j, n;
	for (i = 0; i < 10; i++)
	{
		int a[10] = {};
		srand(i);
		for (j = 0; j < 1000; j++)
		{
			n = random_num();
			switch (n)
			{
			case 1:
				a[0]++;
				break;
			case 2:
				a[1]++;
				break;
			case 3:
				a[2]++;
				break;
			case 4:
				a[3]++;
				break;
			case 5:
				a[4]++;
				break;
			case 6:
				a[5]++;
				break;
			case 7:
				a[6]++;
				break;
			case 8:
				a[7]++;
				break;
			case 9:
				a[8]++;
				break;
			case 10:
				a[9]++;
				break;
			}
		}
		printf("第%d次\n", i + 1);
		for (j = 0; j < 10; j++)
			printf("%2d 的数量为%d\n", j + 1, a[j]);
	}
	return 0;
}
int random_num(void)
{
	int n;
	n = rand() % 10 + 1;

	return n;
}