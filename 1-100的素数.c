#include<stdio.h>
int main()
{
	unsigned int i,a,n;
	printf("1-100之间的素数有:");
	for(a=3;a<100;a+=2)
	{
		int t=0;
		for(i=3;i<a;i+=2)
		{
			n=a%i;
			if(n==0)
			{
				t=1;
				break;
			}
		}
		if(t==0)
		{
			printf("%3d",a);
		}
	}
	return 0;
}
