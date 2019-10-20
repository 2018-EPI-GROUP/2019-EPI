#include <stdio.h>
void fun1(void);
void fun2(void);
int main()
{
	
	fun1();
	return 0;
}

void fun1(void)
{
	asd:printf("我是fun1!(^?^*)");
	goto loop;
}

void fun2(void)
{
	loop:printf("我是fun2");
	goto asd;
}
