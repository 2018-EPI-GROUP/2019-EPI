#include<stdio.h>
int main ()
{
	int n,
	    i,
	    j,
	    a;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=50;j++)
		{
			for(a=1;a<=100;a++)
			{
				if((5*i+2*j+a)==150&&(i+j+a)==100)
				printf("%d %d %d\n",i,j,a);
			}
		}
	}
}
