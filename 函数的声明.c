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
	printf("����fun1����\n");
	fun2();
}
void fun2(void)
{
	printf("����fun2����\n");
	fun1();//�������������˼ô 
}
