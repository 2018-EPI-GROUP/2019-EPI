#include<stdio.h>
int main()
{
   
    int n,N,i,j,x,sum=0;
    scanf("%d",&N);
    n=N;
    x=N;
    for(i=1;i<=n;i++)
    {
    	for(j=N-1;j>1;j--)
    	{
    		x*=j;
	
     	}
     	sum+=x;
     	--N;
     	x=N;
	}
	printf("%d",sum);
    return 0;
}
