#include<stdio.h>
long isprime(long x)
{
	int i;
	int ret=1;
	if(x==1||(x%2==0&&x!=2))
	{
		ret=0;
	}
	for(i=3;i<x;i+=2)
	{
		if(x%i==0)
		{
			ret=0;
			break;
		}
	}
	return ret;
}
int main()
{
	int m,n,i;
	long x;
	printf("请输入开始序号n\n");
	scanf("%d",&n);
	printf("请输出截至序号m\n");
	scanf("%d",&m);
	int a[100];
	a[0]=2;
	for(i=1;i<=10;i++)
	{
		for(x=3;x<=90000;x+=2)
		{
			isprime(x); 
		
			if(isprime(x)==1)
			{
				a[i]=x;
			}
		}
		
	}
	int sum=0;
	for(i=n;i<=m;i++)
	{
		sum+=a[i];
	}
	printf("和为%d",sum); 
	return 0;
}
