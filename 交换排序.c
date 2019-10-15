#include<stdio.h>
int main()
{
	int a,b,t;
	int n[10];
	printf("为数组元素赋值：\n");
	for(a=0;a<10;a++)
	{
		printf("n[%d]=",a);
		scanf("%d",&n[a]);
	}
	for(a=0;a<9;a++)
	{
		for(b=a+1;b<10;b++)
		{
			if(n[b]<n[a])
			{
				t=n[b];
				n[b]=n[a];
				n[a]=t;
			}
		}
	}
	for(a=0;a<10;a++)
	{
		printf("%d\t",n[a]);
		if(a==4)
		printf("\n");
	}
	return 0;
}
