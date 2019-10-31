#include<stdio.h>
int main(void)
{
	int i , j , n ;
	printf("Please input how many dimensional array you want to create\n");
	scanf("%d",&n);
	int a[n][n] ;
	printf("Please input your Multidimensional array\n");
	for(i =0 ; i < n ; i++ )
		for(j =0 ; j < n ; j++ )
			scanf("%d",&a[i][j]);
	printf("\n");
	for(i =0 ; i < n ; i++ )
		{for(j =0 ; j < n ; j++ )
			{printf("%d  ",a[i][j]);
			if(j == n-1)
			printf("\n");
			}
		}
	return 0;
} 
