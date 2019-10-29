#include<stdio.h>
extern unsigned int rand0(void);//extern说明符表明声明的变量定义在别处

int main(void)
{
	int count;

	for (count = 0; count < 5; count++)
		printf("%d\n", rand0());

	return 0;
}