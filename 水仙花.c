#include<stdio.h>
int main()
{
	printf("��λ����ˮ�ɻ����У�\n");
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
