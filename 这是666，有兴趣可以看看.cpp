#include<stdio.h>
int main(void)
{
	int a = 6;
	for (int i = 1; i >0; i++)
	{
		for (int j = 1; j <i; j++)
		{
			printf("%d", a);
		}
		printf("\n");
		if (i >= 120)
		{
			i = 1;
		}
	}
	return 0;
}