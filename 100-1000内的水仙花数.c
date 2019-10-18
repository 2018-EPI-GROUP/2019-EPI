#include <stdio.h>
int main ()
{
	int a,b,c,d;
	printf(" water flower is :\n");
	for(a=100;a<=1000;a++)
	{
	b=a/100;//分解出百位
	c=a/10%10;//分解出十位
	d=a%10;//分解出各位
	if(b*100+c*10+d==b*b*b+c*c*c+d*d*d)
	printf("%-5d",a);
	}
}