#include<stdio.h>
int main(void)
{
	int a , b ;
	while( (a = getchar()) != EOF)  //当输入不为结尾时继续getchar 
		putchar(a);                 //只当输入control+z时结束getchar 
	printf("#EOF#\n");
	
	b = getchar() ;  //只读入一个字符 
	putchar(b) ;
	
	return 0;
}
