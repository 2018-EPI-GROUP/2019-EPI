#include<stdio.h>
double average(double a, double b, double c)
{
	double t;
	t=(a+b+c)/3;
	return(t);
}
main()
{
	double x,y,z,l;
	printf("请输入三个任意数\n");
	scanf("%lf,%lf,%lf",&x,&y,&z);
	l=average(x,y,z);
	printf("这三个数的平均值为%f\n",l);
}
