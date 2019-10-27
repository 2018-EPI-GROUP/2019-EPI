#include <stdio.h>
int main()
{
	int i=0,n,d[99];
	printf("请输入一个十进制整数\n");
	scanf("%d",&n);
	while(n>0)
	{
		d[i++]=n%2;
		n=n/2;
	}
	for(i--;i>=0;i--)
	printf("%d",d[i]);
} 