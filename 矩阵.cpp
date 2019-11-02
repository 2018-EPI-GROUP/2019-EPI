#include<stdio.h>
int main()
{
  
	int i,j,n=0;
	for(i=1;i<=4;i++)
		for(j=1;j<=5;j++,n++)
		{if(n%5==0)
		printf("\n");
		printf("%d\t",j*i);
		}
	printf("\n");
	return 0;
}
