#include<stdio.h>
#include<math.h>
double fact(int a,int b);
int main()
{
	int m,n,t;
	scanf("%d,%d",&m,&n);
	t=fact(m,n);
	printf("%d",t);
}
double fact(int a,int b)
{
	int m=1,n=1,i,x=1;
	double sum;
	for(i=a;i!=1;i--)
	{
		m*=i;
	}
	for(i=b;i!=1;i--)
	{
		n*=i;
	}
	for(i=abs(a-b);i!=1;i--)
	{
		x*=i;
	}
	sum=n/(m*x);
	return sum;
}
