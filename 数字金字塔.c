#include<stdio.h>
main()
{
	int n,
	    i,
	    j,
	    a,
	    c, 
	    b=1; 
	scanf("%d",&n);
	c=n;
	for(i=1;i<=n;i++)
	{
		
		
			
			for(a=1;a<=c;a++)
			{
				printf(" ");
			}
			for(j=1;j<=i;j++)
			printf("%d ",b);
			
		
		printf("\n");
		++b;
		--c;
	}
	
 } 
