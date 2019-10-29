#include<stdio.h>
#include<math.h>
long int mi(int x,int n)
{
    long int s;
	if(n==0)
	return 1;
	else if(n>0)
	s=x*mi(x,n-1);
	return s;
}
main()
{
	int n,x;
	printf("请输入一个数\n");
	scanf("%d",&x);
	printf("请输入要计算的n值\n");
	scanf("%d",&n);
	printf("结果为%ld",mi(x,n));
}
