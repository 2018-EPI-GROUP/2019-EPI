#include <stdio.h>
void fun(int n)
{
	if(n>0)
	{
		printf("%d\n",n);
		fun(n-1);
		printf("%d\n",n);
	}	
}

int main()
{ 
	fun(4);//结果是4 3 2 1 1 2 3 4
	//之所以出现这样的结果是因为递归的特性，详见笔记递归函数 
	
	return 0;
}
