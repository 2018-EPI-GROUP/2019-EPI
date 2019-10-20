#include<stdio.h>
void fun1(void);
void fun2(void);
int main()
{
	fun1();
	
	return 0;
}


void fun1(void)
{
	printf("我是fun1函数\n");
	fun2();
}
void fun2(void)
{
	printf("我是fun2函数\n");
	fun1();//互相调用你有意思么 
}
