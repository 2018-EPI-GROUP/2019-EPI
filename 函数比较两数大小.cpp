#include<stdio.h>
max(int x,int y)
{
	if(x>y)
	     return x;
	else
	     return y; 
} 
main()
{
	int a,b,m;
	printf("����������������\n");
	scanf("%d,%d",&a,&b);
	m=max(a,b);
	printf("�����Ϊ%d",m);
}
