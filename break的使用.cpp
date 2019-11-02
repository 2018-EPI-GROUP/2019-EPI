#include<stdio.h>
#define SUM 100000
//define常量SUM=100000 
int main()
{
	float amount,aver,total;
	int i;
	for(i=1,total=0;i<=100;i++)
	{
		printf("please enter amount");
		scanf("%f",amount);
		total=total+amount;
		if(total>=SUM)break;
		//跳到循环体外，接着执行循环体下来的语句 
	}
	aver=total/i;
	printf("num=%d\n aver=%7.2f\n",i,aver);
	return 0;
} 
