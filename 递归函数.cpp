#include<stdio.h>
long int qiuhe(unsigned int n)
{
	int s;
	if(n==1)
	return 1;
	else
	s=qiuhe(n-1)+n;
	return s;
}
main()
{
	unsigned int n;
	printf("������һ���������\n");
	scanf("%u",&n);
	printf("��%u=%u",n,qiuhe(n));
}
