#include <stdio.h>

void fun(int *p)
{
	printf("b = %d\n",*p);
	*p = 12;
	printf("b = %d\n",*p);
}

int main (void)
{
	int a = 2; //int *p = &a;
	printf("a = %d\n",a);
	fun(&a);
	printf("a = %d\n",a);
	
	return 0;
}

