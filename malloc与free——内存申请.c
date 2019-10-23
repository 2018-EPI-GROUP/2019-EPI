#include<stdio.h>
int main(void)
{
	int n,i;
	scanf("%d",&n);
	int *p=(int*)malloc(sizeof(int)*n);
	for(i=0;i<=n;i++)
	{p[i]=i;}
	for(i=0;i<=n;i++)
	{printf("%d ",p[i]);}
	free(p);
return 0;
}
