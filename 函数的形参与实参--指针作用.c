#include<stdio.h>
sway(int *p1 , int *p2)
{
	int tem;
	tem=*p1;
	*p1=*p2;
	*p2=tem;
}
int main(void)
{
	int a,b;
	int *pd_1,*pd_2;
	scanf("%d,%d",&a,&b);
	pd_1=&a;
	pd_2=&b;
	sway(pd_1,pd_2);
	printf("a=%d,b=%d",a,b);
return 0;
}
