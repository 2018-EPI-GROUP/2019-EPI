#include<stdio.h>
int main(void)
{
	int a[7],i,tem;
	int *p;
	for(i=0;i<=6;i++)
		{a[i]=i+1;}
	p=&a;
	printf("%d\n",*p+4);
	printf("%d",*p+3);
	for(i=0;i<=6;i++)
	{printf("\n%d",a[i]);}
}
