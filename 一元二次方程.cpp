#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,flag;
	float x1,x2;
	printf("请输入一元二次方程的系数\n");
	scanf("%d%d%d",&a,&b,&c);
	flag=b*b-4*a*c;
	if(flag>0)
	{
		x1=(-b-sqrt(flag))/2*a;
		x2=(-b+sqrt(flag))/2*a;
		printf("方程的两个根为\n");
		printf("%f %f",x1,x2);
	}
	else if(flag==0)
	{
		x1=x2=(-b+sqrt(flag))/2*a;
		printf("方程的一个根为\n");
		printf("%f",x1);
	}
	else if(flag<0)
	{
		printf("该方程无解\n");
	}
	return 0;
 } 
