#include<stdio.h>
int main(void)
{
	int a[4][4] = {{1},{1,2},{1,2,3},{1,2,3,4}};
	int i , j ;
	for(i = 0; i <= 3; i++ )
		{for(j = 0; j <= 3; j++ )
			printf("a[%d][%d] %d  ", i , j, a[i][j] );
		}
	return 0;
}
