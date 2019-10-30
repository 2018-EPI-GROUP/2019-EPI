//递归前
//#include<stdio.h>
//long fact(int num);
//long fact(int num)
//{
//	long result;
//	for(result=1;num>1;num--)
//	{
//		result*=num;
//	}
//	return result;
//}
//int main(void)
//{
//	int num;
//	printf("请输入一个正整数以求阶乘\n");
//	num=5;
	//scanf("%d",&num);
//	printf("%d",fact(num));
//}
//递归后
#include<stdio.h>
long fact(int num);
long fact(int num)
{
	long result;

	if(num>0)
	{
		result=num*fact(num-1);
	}
	else
	{
		result=1;
	} 
	
	return result;
}
int main(void)
{
	int num;
	printf("请输入一个正整数以求阶乘\n");
	num=10;
	//scanf("%d",&num);
	printf("%d",fact(num));
}

