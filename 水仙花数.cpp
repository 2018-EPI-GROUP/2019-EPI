#include<stdio.h>

shuixian(int x,int y,int z)
{
	int t;
	t=x*x*x+y*y*y+z*z*z;
	return t;
}
main()
{
	int i,j,t,n,shu;
	for(i=100;i<=999;i++)
	{
		j=i/100;
		t=i%100/10;
		n=i%10;
		shu=shuixian(j,t,n);
	    if(i==shu)
		printf("%4d",shu);
	}
}
