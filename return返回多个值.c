#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
int *fun(void)
{
	int *p = (int*)malloc(8);
	*p = 4;
	p[1] = 5;
	return p;
}

int main(void)
{
	int *a = fun();
	printf("%d,%d\n",a[0],a[1]);
	free(a);
	return 0;
}
