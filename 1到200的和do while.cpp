#include"stdio.h"
main()
{
	int i,sum;
	i=1,sum=0;
	do
	{
		sum=sum+i;
		i++;
	}
	while(i<=200);
	printf("sum=%d\n",sum);
	
 } 
