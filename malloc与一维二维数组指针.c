#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
int main()
{
	int (*p)[5] = (int(*)[5])malloc(sizeof(int)*5);
	int a[5];
	int (*p1)[5] = &a;
	int i;
	*(*p+0) = 1;
	*(*p+1) = 2;
	*(*p+2) = 3;
	*(*p+3) = 4;
	*(*p+4) = 5;
	for(i = 0 ; i < 5 ; i++)printf("%d ",(*p)[i]);
	printf("\n");

	return 0;
}
