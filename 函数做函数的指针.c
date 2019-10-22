#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
	srand((unsigned)time(NULL));
	double(*fp1)(double,double);
	int(*fp2)();
	fp1=pow;
	fp2=rand;
	printf("%lf,%d",fp1(2,5),fp2()); 
}
