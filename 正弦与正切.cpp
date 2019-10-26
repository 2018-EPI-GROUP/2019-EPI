#include<stdio.h>
#include<math.h>
#define N 90
main()
{
	int i,j;
	double a[N+1],b[N/2+1];
	double pi=3.141592656; 
	for(i=0;i<=N+1;i++)
	{
		a[i]=sin(i/180.0*pi);
		printf("sin%d=%lf\n",i,a[i]);
	}
	for(j=0;j<=N/2+1;j++)
	{
		a[j]=tan(j/180.0*pi);
		printf("tan%d=%lf\n",j,a[j]);
	}
}
