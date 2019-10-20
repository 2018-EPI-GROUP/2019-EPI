#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
int main()
{
	int *p = (int*)malloc(12);
	size_t a = _msize(p);
	printf("%d\n",a);
	int *p1 = (int*)realloc(p,20);
	a = _msize(p);
	printf("%d\n",a);
	
	free (p);
	
	return 0;
}
