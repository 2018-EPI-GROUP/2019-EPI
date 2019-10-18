#include<stdio.h>
main()
{
	int i,j,n;
	printf("ÇëÊäÈëÐÐÊý\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<i;j++)
		printf(" ");
		for(j=1;j<n-i+2;j++)
		printf("*"); 
		printf("\n");
	}
}
