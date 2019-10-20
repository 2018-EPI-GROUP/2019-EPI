#include <stdio.h>
int main()
{
	//size_t == long unsigned int其实是一种重命名 
	int a = sizeof(size_t);
	printf("%d",a);//测试结果：8 
	return 0;
}
