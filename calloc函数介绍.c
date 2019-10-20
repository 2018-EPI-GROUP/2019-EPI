#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int main()
{
	int *p = (int*)calloc(5,sizeof(int));
	int i;
	for (i = 0 ; i < 5 ; i++)
		printf("%d ",*(p+i));
	
	
	return 0;
}
