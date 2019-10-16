#include<stdio.h>
int main()
{
	int a,b,c;
	int n[10];
	printf("为数组元素赋值：\n");
	for(a=0;a<10;a++)
	{
		printf("n[%d]=",a);
		scanf("%d",&n[a]);
	}
	for(a=1;a<10;a++)
	{
		b=n[a];
		c=a-1;
		while((c>=0)&&(b<n[c]))
		{
			n[c+1]=n[c];
			c--; 
		}
		n[c+1]=b;
	}
	for(a=0;a<10;a++)
	{
		printf("%d\t",n[a]);
		if(a==4)
		printf("\n");
	}
	return 0;
} 
