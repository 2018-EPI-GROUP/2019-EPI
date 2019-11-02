#include<stdio.h>
int main()
{
	int i,sum=0;
	printf("please enter i,i=?\n");
	scanf("%d",&i);
	do
	{
		sum=sum+i;
		i++;
	}while(i<=10);
	printf("%d\n",sum);
	return 0;
} 
