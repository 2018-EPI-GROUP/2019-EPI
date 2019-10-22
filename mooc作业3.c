#include <stdio.h>
int main()
{
	int n,S = 0,i,j;
	scanf("%d",&n);
	if(n<=0)
	printf("Error!");
	else
	{
		for(i = 1 ; i <= n ; i++)
		{
			 for( j = 1 ; j <= i ; j++)
			 {
			 	S = S+j;
			 }
		}
		printf("%d",S);
	}
	
	return 0;
}
