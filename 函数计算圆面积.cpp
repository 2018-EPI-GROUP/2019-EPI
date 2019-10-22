#include<stdio.h>
#define PI 3.141592656
double t(int r)
{
   double s;
   s=PI*r*r;
   return(s);
 } 
 main()
 {
 	int r;
 	double a;
 	printf("请输入半径\n");
 	scanf("%d",&r);
 	if(r<0)
 	printf("错误，半径不能为负数");
	else 
 	{
	   a=t(r);
 	   printf("圆的面积为%lf\n",a);
    }
 }
