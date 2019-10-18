#include<stdio.h>
#include<math.h>
#define PI 3.14
main() 
{
	int r;
	double l,s;
	printf("请输入圆的半径\n");
	scanf("%d",&r);
	if(r<=0)
	printf("半径不能为负数或零\n");
	if(r>0)
	{
		l=2*r*PI;
		s=PI*r*r;
		printf("该圆的周长为%4f\n面积为%4f",l,s);
	 } 
 } 
