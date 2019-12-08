#include<stdio.h>
int main()
{
	int a[2][5]={{1,2,3,4,5},{0,9,8,7,6}};
	int *p,(*q)[5];
	for(q=a;q<a+2;q++)
	{
		for(p=*q;p<*q+5;p++)
		   printf("%4d",*p);
		   printf("\n");
	}
	return 0;
 } 
