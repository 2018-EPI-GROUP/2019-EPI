#include<stdio.h>
int main(void)
{
	int a=5,b=6;
	int *pa,*pb;
	pa=&a;
	pb=&b;
	printf("%d,%d\n",a,b);
	printf("%d,%d",pa,pb);//*pa��pa=&aΪ������� 
return 0; 
}
