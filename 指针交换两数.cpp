#include<stdio.h>
 int swap(int *a,int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
 } 
 main()
 {
 	int a,b;
 	printf("������������\n");
 	scanf("%d%d",&a,&b);
 	swap(&a,&b);
 	printf("������%2d%2d",a,b);
 }
