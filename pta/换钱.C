#include<stdio.h>
int main()
{
	int i,j,k,n;
    scanf("%d",&n);
	for(i=0;i<20;i++)
		for(j=0;j<50;j++)
			for(k=0;k<100;k++)
		{	if((i+k+j)==100&&(5*i+2*j+k==150))
			{  if(n==0)
				break;
				printf("%3d %3d %3d\n",i,j,k);
				n--;
            }
		}
	return 0;
}
