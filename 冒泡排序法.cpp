#include<stdio.h>
#define n 10 
main()
{
	int i,j,t,a[n];
	for(i=0;i<10;i++)
	{
		printf("�������%d����\n",i);
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
	printf("��Щ����С��������Ϊ\n");
	for(i=0;i<10;i++)
	printf("%4d",a[i]);
 } 
