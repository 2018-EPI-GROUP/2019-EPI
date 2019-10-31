#include<stdio.h>
int main()
{
	int x;
	int a[10];
	for(x=0;x<10;x++)
	{
		a[x]=0;
	}
	printf("输入第一个数\n"); 
	scanf("%d",&x); 
	while(x!=-1);
	{
		
		if(x>=0&&x<=9)
		{
			a[x]+=1;
		}
		printf("下一个数\n"); 
		scanf("%d",&x);
	}
	for(x=0;x<=9;x++)
	{
		printf("数字%d出现的次数为-----%d\n",x,a[x]);
	}
	return 0;
} 
