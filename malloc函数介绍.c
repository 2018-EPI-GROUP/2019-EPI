#include <stdio.h>
#include <stdlib.h> 
#include <malloc.h>
int main()
{
	int *p = (int*)malloc(4);//这里的4当然也可以换成sizeof(int) //malloc用法：前面的括号是申请的数据类型（一定要带上*）后面的括号是申请的字节数 
	//最前面是申请一个指针p去装下这个4字节空间的第一个字节的地址（首地址） 
	//前面的括号实质是强制类型转换，把这块空间转换为int型 
	
	return 0;
}
//参照size_t的详解，这里的4其实是int型的，系统会自动给我们转换成无符号的整形所以更加标准的写法是4u 
