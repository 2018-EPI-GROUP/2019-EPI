#include<stdio.h>
#include<math.h>
int main()
{
	int m,
	    n,
	    b=0,
	    c=0,
	    i,
	    j;
	int a[100];
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++)
	{
		for(j=1;j<sqrt(i);j++)
		{
			if(i/j==0)
			a[b]=(i/j);
			b++;
		}
		for(j=0;j<=b;j++)
		{
			c=c+a[j];
			
		}
		if(i==c)
		{
			printf("%d = ");
			for(j=0;j<=b;j++)
			{
				printf("%d",a[j]);
				if(j!=b)
				   printf(" +");
				
				   
				
				
			}
			printf("/n");
		}
	}
	
	
 } 
