#include<stdio.h>
swap(int **p,int **q)
 {
 	int *t;
 	t=*p;
    *p=*q;
 	*q=t;
 }
main()
{
	int a,b;
	int *c=&a,*d=&b;
	printf("����������\n");
	scanf("%d%d",&a,&b);
	swap(&c,&d);
	printf("����������Ϊ��%2d%2d",*c,*d);
 } 
 
