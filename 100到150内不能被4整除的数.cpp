#include<stdio.h>
main()
{
	int i,n;
	printf("100��150�ڲ��ܱ�4��������Ϊ\n");
	for(n=100;n<=150;n++)
	{
		if (n%4==0)
		continue;
		printf("%4d",n);
		i++;
		if (i%8==0)
		printf("\n"); 
	}
 } 
