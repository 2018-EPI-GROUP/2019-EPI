#include<stdio.h>
#include<math.h>
#define PI 3.14159265
double mianji(double a);
double yuanhuan(double x,double y);
main()
{
    double a,b,are;
	printf("����������ͬ��Բ�뾶\n");
	scanf("%lf,%lf",&a,&b);
	
	printf("%lf",yuanhuan(a,b)); 
}

double mianji(double a)
{
	double s;
	s=PI*a*a;
}
double yuanhuan(double x,double y)
{
	double are;
	are=fabs(mianji(x)-mianji(y));
	return(are);
}
