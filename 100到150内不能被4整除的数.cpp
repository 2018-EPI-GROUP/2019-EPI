#include<stdio.h>
main()
{
	int i,n;
	printf("100到150内不能被4整除的数为\n");
	for(n=100;n<=150;n++)
	{
		if (n%4==0)
		continue;
		printf("%4d",n);
		i++;
		if (i%8==0)
		printf("\n"); 
	}
 } 
