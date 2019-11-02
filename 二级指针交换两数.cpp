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
	printf("请输入两数\n");
	scanf("%d%d",&a,&b);
	swap(&c,&d);
	printf("交换后两数为：%2d%2d",*c,*d);
 } 
 
