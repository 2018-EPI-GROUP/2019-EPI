#include<stdio.h>
int main()
{
	int i=1,sum=0;
	while(i<=100)
	{
		sum=sum+i;
	    ++i;
	}
	printf("%d\n",sum);
	return 0;
}
