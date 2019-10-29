#include<stdio.h>
#include<math.h>
int sushu(int n)
{
	int i,t;
	for(i=2;i>=sqrt(n);i++)
	   if(n%i==0)
	   break;
	   return n; 
}
int yinzi(int a)
{
	int i,t,j,b;
	for(i=2;i<a;i++)
	{
		t=a%i;
		b=a/i;
		if(t==0)
		{
		   j=sushu(i);
		   return(j);
	    }
	}
}
main()
{
	int n;
	printf("请输入一个正整数\n");
	scanf("%d",&n);
	printf("%d的全部素数因子为%4d",n,sushu(yinzi(n)));
}
