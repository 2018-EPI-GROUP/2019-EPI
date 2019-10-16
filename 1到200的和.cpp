#include<stdio.h>
main()
{
	int i,sum;
	i=1,sum=0;
	while(i<=200)
	{
		sum=sum+i;
		i++;
	}
	printf("1到200的和为sum=%d\n",sum);
}
