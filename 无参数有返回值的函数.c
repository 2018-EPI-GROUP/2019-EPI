#include <stdio.h>
#include <stdlib.h>

int fun(void)
{
	
	printf("���Ǻ���fun\n");
	return 4;
}

int main(void)
{
	int a = fun();
	printf("%d, %d",a,fun());
	
	
	
	
	return 0;
}
