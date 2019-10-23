#include<stdio.h>
int main()
{
	int iResult=0;
	int i;
	printf("由1加到100的结果是：");
	for(i=1;i<=100;i++)
	{
		iResult=i+iResult;
	} 
    printf("%d\n",iResult);
    return 0;
} 
 
