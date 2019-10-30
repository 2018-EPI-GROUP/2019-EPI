#include<stdio.h>
int isprime(int x);
int isprime(int x)
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
	int x;
	scanf("%d",&x);
	int ret=1;
	isprime(x);
	if (isprime(x)==0)
	{
		printf("不是素数\n");
	}
	if(isprime(x))
	printf("是素数\n");
	
	return 0;
}
