#include <stdio.h>
#include <math.h>
int main()
{
	int i = 1000,a,b;

	for(;i<=9999;i++)
	{	
		a = i/100;
		b = i%100;
		if(i == pow(a+b,2))
		printf("%d\n",i);
		
	}
	
	
	return 0;
}
