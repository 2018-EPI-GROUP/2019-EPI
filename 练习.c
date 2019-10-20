#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int main()
{
	int *p = (int*)malloc(sizeof(int)*5);
	memset (p ,0000000000000001,20);
	printf ("%d",*p);
	
	return 0;
}
