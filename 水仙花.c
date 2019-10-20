#include<stdio.h>
int main()
{
	printf("三位数的水仙花数有：\n");
	int a;
	for(a=100;a<1000;a++)
	{
		int b,c,d;
		b=a/100;
		c=(a/10)%10;
		d=a%10;
		if(a==b*b*b+c*c*c+d*d*d)
		{
			printf("%d\t",a);
		}
	}
	return 0;
}
