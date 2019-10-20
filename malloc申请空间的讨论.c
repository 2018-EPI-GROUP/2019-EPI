#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
int main()
{
	int *p = (int*)malloc(16*1024*1024*1024);
	//数据类型溢出  
	return 0;
}
