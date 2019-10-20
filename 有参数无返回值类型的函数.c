#include <stdio.h>
#include <stdlib.h>

void fun(int a , double d)
{
	printf("%d,%.2lf",a,d);
}

int main()
{
	int c = 12;
	double f = 13.13;
	fun(12,f);
	
	return 0;
}
