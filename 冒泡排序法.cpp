#include<stdio.h>
#define n 10 
main()
{
	int i,j,t,a[n];
	for(i=0;i<10;i++)
	{
		printf("请输入第%d个数\n",i);
		scanf("%d",&n);
	}
	for(i=0;i<10;i++)
	{
		for(j=0;j<=n-i;j++)
		{
			if(a[i]>a[j+1])
			{
				t=a[i];
				a[i]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	printf("这些数从小到大排列为\n");
	for(i=0;i<10;i++)
	printf("%4d",a[i]);
 } 
