#include<stdio.h>
int main()
{
	unsigned int i,a,n;
	int t=0;
	printf("����������:");
	scanf("%d",&a);
	if(a>2&&a%2!=0)
	{
		for(i=3;i<a;i+=2)
		{
			n=a%i;
			if(n==0)
			{
				printf("������������");
				t=1;
				break;
			}
		}
		if(t==0)
		printf("����������");
	}
	else
	printf("������������");
	return 0;
}
