#include<stdio.h>
int main()
{
	int iResult=0;
	int i;
	printf("��1�ӵ�100�Ľ���ǣ�");
	for(i=1;i<=100;i++)
	{
		iResult=i+iResult;
	} 
    printf("%d\n",iResult);
    return 0;
} 
 
