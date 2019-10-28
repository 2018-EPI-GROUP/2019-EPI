#include<stdio.h>
#define N 9 
main()
{
	int i,j,a[N][N];
	for(i=0;i<N;i++)
	{
		a[i][0]=1;
		a[i][i]=1;
	}
	for(i=0;i<N;i++)
	{
		for(j=1;j<i;j++)
		a[i][j]=a[i-1][j]+a[i-1][j-1];
		for(j=0;j<=i;j++)
		printf("%4d",a[i][j]);
		printf("\n");
    }
 } 
