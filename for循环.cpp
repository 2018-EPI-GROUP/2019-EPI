#include<stdio.h>
int main()
{
	int i,sum=0;
	for(i=0;i<100;i++)
	sum=sum+i;
	//三个表达式间用; 
	/*表达式1；初始条件，只执行一次，可以为多个变量设置初始值； 
	表达式2；循环表达式 用来判断是否循环。在每次循环前先进行判断，决定是否开始循环
	表达式3；循环的调整，循环便能量增值*/ 
	printf("%d\n",sum);
	return 0;
}
/*i=1;
while(i<100)
{	sum=sum+i;
	i=i++;
}*/
	
