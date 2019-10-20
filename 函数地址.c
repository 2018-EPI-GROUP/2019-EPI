#include <stdio.h>

int fun (int a)
{
	printf("我是fun\n");
	return 0;
}

int main()
{
	//这里fun函数的类型是int(int a)，也就是说地址也是int (int a)
	//想要定义一个指针来指向函数地址的方法：
	int (*p)(int) = fun;
	p();
	return 0;
}

