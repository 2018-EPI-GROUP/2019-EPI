#include <stdio.h>


void fun(void)//这里也不要加分号，就像主函数一样 
{
	printf ("我是函数\n");//无参数无返回值函数封装完成 
}


int main()
{
	
	printf ("我是函数\n");
	fun();//函数的调用 
	return 0;
}
