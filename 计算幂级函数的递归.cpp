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
	printf("������һ����\n");
	scanf("%d",&x);
	printf("������Ҫ�����nֵ\n");
	scanf("%d",&n);
	printf("���Ϊ%ld",mi(x,n));
}
