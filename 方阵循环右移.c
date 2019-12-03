#include<stdio.h>
#include<math.h>
int main()
{
	int m,n,i,j,c,d,e;
	scanf("%d%d",&m,&n);
	int a[n][n],
	    b[n][n];
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	{
		scanf("%d",&a[i][j]);
		
	}
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	{
	     b[i][j]=a[i][i];	
	}
	e=n-m;
	c=abs(e);
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	{
		if(c<=(n-i))
		a[i][j]=b[i][j+c];
		else 
		{
			d=c+i-n;
			a[i][j]=b[i][j+d];
		}
	}
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	{
		printf("%d",a[i][j]);
		if(j==n-1)
		printf("\n"); 
	}
	
}
