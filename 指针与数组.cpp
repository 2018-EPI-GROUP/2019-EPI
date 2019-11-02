#include<stdio.h>
main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,0};
	int *p=a,i;
	for(i=0;i<10;i++)
	printf("%4d\n",p[i]);
	for(i=0;i<10;i++)
	printf("%4d\n",*(p+i));
}

