#include<stdio.h>
max(int x,int y)
{
	if(x>y)
	     return x;
	else
	     return y; 
} 
main()
{
	int a,b,m;
	printf("请输入两个正整数\n");
	scanf("%d,%d",&a,&b);
	m=max(a,b);
	printf("大的数为%d",m);
}
