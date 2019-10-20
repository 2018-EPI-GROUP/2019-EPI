#include <stdio.h>
int main()
{
	float x;
	scanf("%f",&x);
	x = x*(x<=-1)+3*x*(x>-1 && x<=1)+x*x*(x>1);
	printf("%f",x);
	
	return 0;
}
