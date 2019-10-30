#include<stdio.h>
int main()
{
	int a[10];
	int x,i;
	int exchange;
	for(i=0;i<=9;i++)
	{
		scanf("%d",a[i]);
		printf(",");
	}
	for(x=0;x<9;x++)
	{
		for(i=0;i<9;i++)
		{
			if(a[i]>a[i+1])
			{
				exchange=a[i+1];
				a[i+1]=a[i];
				a[i]=exchange;
			}
		}
	}
	for(i=0;i<=9;i++)
	printf("%d  ",a[i]);
	return 0;	
}
