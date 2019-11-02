#include<stdio.h>
int main()
{
	int n;
	for(n=100;n<=200;n++)
	{if(n%3==0)
	continue;
	//结束本次循环 
	printf("%d\t",n);
	//转义符\t将光标移至下一个TAB位置，水平制表符 
	} 
	return 0;
	
 } 
