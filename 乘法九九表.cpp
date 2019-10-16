#include"stdio.h"
main()
{
	int i,j,n;
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=9;j++)
		{
			n=i*j;
			printf("%5dX%d=%d",i,j,n);
		}
		printf("\n");
	}
 } 
