#include<stdio.h>
int main(void)
{
	int a , b ;
	while( (a = getchar()) != EOF)  //�����벻Ϊ��βʱ����getchar 
		putchar(a);                 //ֻ������control+zʱ����getchar 
	printf("#EOF#\n");
	
	b = getchar() ;  //ֻ����һ���ַ� 
	putchar(b) ;
	
	return 0;
}
