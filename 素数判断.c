#include<stdio.h>
int main()
{
	unsigned int i,a,n;
	int t=0;
	printf("请输入数字:");
	scanf("%d",&a);
	if(a>2&&a%2!=0)
	{
		for(i=3;i<a;i+=2)
		{
			n=a%i;
			if(n==0)
			{
				printf("该数不是素数");
				t=1;
				break;
			}
		}
		if(t==0)
		printf("该数是素数");
	}
	else
	printf("该数不是素数");
	return 0;
}
