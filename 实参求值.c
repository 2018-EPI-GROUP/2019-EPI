#include<stdio.h>
main()
{
	int i=3,
	    p;
	p=f(i,++i,++i);
	printf("%d",p);
 } 
int f(int a,int b,int c)
{
	printf("%d %d %d\n",a,b,c);
	return (a+b+c);
}
