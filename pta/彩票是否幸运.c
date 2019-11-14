#include<stdio.h>
int main()
{
	int x,y,p,q,i,n,a[100],k[100]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		x= a[i] / 1000;
		y= a[i] % 1000;
		p=x % 10+x / 10 % 10+x / 100;
		q=y % 10+y / 10 % 10+y / 100;
		if(p==q)
		k[i]=1;
	}
	for(i=0;i<n;i++)
	{
		if(k[i]==1)
		printf("You are lucky!\n");
		else
		printf("Wish you good luck.\n");
	}
	return 0;
}
