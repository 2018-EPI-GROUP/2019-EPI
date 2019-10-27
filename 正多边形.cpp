#include<stdio.h>
#include<math.h>
#define PI 3.1416926
int main(void)
{
	int n;
	double b, Z, M;
	scanf("%d",&n);
	scanf("%lf",&b);
	Z = n* b;
	M = (n*b*b) / (4*tan(PI / n));
	printf("%.2lf  %.2lf", Z, M);
	return 0;
}
