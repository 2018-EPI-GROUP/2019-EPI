#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int count = 0 ;
	void *p ;
	while ((p = malloc( 100 * 1024 * 1024 )))
		{count++ ;
		}
	printf(" ������%d00MB�Ŀռ�" , count );
	return 0;
}
