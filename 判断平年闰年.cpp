#include<stdio.h>
main()
{
	int year;
	printf("请输入年份");
	scanf("%d",&year);
	if(year%4==0&&year%100!=0)
	printf("该年是闰年");
	else
	printf("该年是平年");
 } 
