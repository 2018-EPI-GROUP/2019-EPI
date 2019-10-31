#include<stdio.h>
int b[4][4];  //在函数体外定义的全局变量自动初始化为零 
int main(void)
{
	int a[4][4] = {{1},{1,2},{1,2,3},{1,2,3,4}};  //在函数体内定义的变量需要自己初始化，注意多维数组初始化的格式 
	int i , j ;
	for(i = 0; i <= 3; i++ )
		{for(j = 0; j <= 3; j++ )
			printf("a[%d][%d] %d  ", i , j, a[i][j] );
		}
	for(i = 0; i <= 3; i++ )
		{for(j = 0; j <= 3; j++ )
			printf("b[%d][%d] %d  ", i , j, b[i][j] );
		}
	return 0;
}
