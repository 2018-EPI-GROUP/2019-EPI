#include<stdio.h>
int main(void)
{
	int a[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16} ;
	int i , j , sum ; 
	//主对角线元素遍历 
	for( sum = 0 , i = 0 ; i < 4 ; i++ )
		{j = i ;
		printf("%d ", a[i][j] );
		sum += a[i][j] ;
		}
	printf("\n主对角线元素之和为%d\n",sum) ;
	//副对角线元素遍历
	for( sum = 0 , i = 0 ; i < 4 ; i++ )
		{j = 3-i ;
		printf("%d ", a[i][j] );
		sum += a[i][j] ; 
		}
	printf("\n副对角线元素之和为%d\n",sum) ;
	//左上三角元素遍历
	for( sum = 0 , i = 0 ; i < 4 ; i++ )
		{for( j = 0 ; j < 4-i ; j++ )
			{printf("%d ", a[i][j] );
			sum += a[i][j] ;
			}
		}
	printf("\n左上三角元素之和为%d\n",sum) ;
	//左下三角元素遍历
	for( sum = 0 , i = 0 ; i < 4 ; i++ )
		{for( j = 0 ; j < i+1 ; j++ )
			{printf("%d ", a[i][j] );
			sum += a[i][j] ;
			}
		}
	printf("\n左下三角元素之和为%d\n",sum) ;
	//右下三角元素遍历
	for( sum = 0 , i = 0 ; i < 4 ; i++ )
		{for( j = 3-i ; j < 4 ; j++ )
			{printf("%d ", a[i][j] );
			sum += a[i][j] ;
			}
		}
	printf("\n右下三角元素之和为%d\n",sum) ;
	//右上三角元素遍历
	for( sum = 0 , i = 0 ; i < 4 ; i++ )
		{for( j = i ; j < 4 ; j++ )
			{printf("%d ", a[i][j] );
			sum += a[i][j] ;
			}
		}
	printf("\n右上三角元素之和为%d\n",sum) ;
	//内部元素遍历 
	for( sum = 0 , i = 1 ; i < 3 ; i++ )
		{for( j = 1 ; j < 3 ; j++ )
			{printf("%d ", a[i][j] );
			sum += a[i][j] ;
			}
		}
	printf("\n内部元素之和为%d\n",sum) ;
	//外部元素遍历 
	for( sum = 0 , i = 0 ; i < 4 ; i++ )
		{for( j = 0 ; j < 4 ; j++ )
			{printf("%d ", a[i][j] );
			sum += a[i][j] ;
			}
		}
	printf("\n外部元素之和为%d\n",sum) ;
	return 0;
}
