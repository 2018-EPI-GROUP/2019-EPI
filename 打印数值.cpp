#include<stdio.h>
int main(void)

{
	int a;
	scanf("%d", &a);
	for (int i = a; i < a + 11; i++)
	{
		printf(" %d", i);
	}
	return 0;
}
