#include<stdio.h>
int main(void)
{
	int a[4][4] = {{1}{1,2}{1,2,3}};
	int i , j ;
	for(i = 1; i <= 4; i++ )
		{for(j = 1; j <= 4; j++ )
			printf("a[%d][%d] %d  ", i , j, a[i][j] );
		}
	return 0;
}
