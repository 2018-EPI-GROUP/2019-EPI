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
	printf("����������������\n");
	scanf("%lf,%lf,%lf",&x,&y,&z);
	l=average(x,y,z);
	printf("����������ƽ��ֵΪ%f\n",l);
}
