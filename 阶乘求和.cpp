#include<stdio.h>
int main()
{
	int sum=0,n=1,i;
	for(i=1;i<=20;i++)
	{
		n=n*i;
		sum=n+sum;
	}
	printf("%d\n",sum);
	return 0;
}
