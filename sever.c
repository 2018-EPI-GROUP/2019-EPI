#include<stdio.h>

void sever(int i)
{
	int a=i/100;
	int b=(i-a*100)/10;
	int c=i-a*100-b*10;
	if (a>=10)
		{
				sever(a);
		}
	else
			printf("%d ",a);
	printf("%d %d ",b,c);
}

int main(void)
{
		int i;
	printf("请输入一个数字(大于100)\n");
	scanf("%d",&i);
	sever(i);
	return 0;
}
