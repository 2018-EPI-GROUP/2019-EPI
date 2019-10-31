/*把分钟表示的时间转换成小时呵呵分钟表示的时间。
使用define或者const创建一个表示60的符号常量。通
过while循环让用户重复输入值，直到用户输入的值小
于或者等于0停止循环*/
#include<stdio.h>
#define shijian 60
int main(void)

{
	int a=1, b, c,i = 0;
	while (a > 0)
	{
		scanf_s("%d", &a);
		if (a > 60)
		{
			while (a > 60)
			{
				c = a / shijian;
				i += 1;
				a = a % shijian;
			}
			printf("%d  %d", c, a);
		}
		else
			printf("%d", a);
	}
	return 0;
}