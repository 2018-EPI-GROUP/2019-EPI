#include<stdio.h>
static int n = 0; //静态变量，拥有内部链接，用于返回函数被调用的次数
int test(void);

int main(void)
{
	int i;
	int a;
	for (i = 0; i < 10; i++)
		a = test();
	printf("函数被调用了%d次\n", a);

	return 0;
}

int test(void)    //该函数返回别调用的次数。
{
	extern int n;
	n++;
	return n;
}