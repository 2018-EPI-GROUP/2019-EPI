#include<stdio.h>
int main(void)
{
	int a[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16} ;
	int i , j , sum ; 
	//���Խ���Ԫ�ر��� 
	for( sum = 0 , i = 0 ; i < 4 ; i++ )
		{j = i ;
		printf("%d ", a[i][j] );
		sum += a[i][j] ;
		}
	printf("\n���Խ���Ԫ��֮��Ϊ%d\n",sum) ;
	//���Խ���Ԫ�ر���
	for( sum = 0 , i = 0 ; i < 4 ; i++ )
		{j = 3-i ;
		printf("%d ", a[i][j] );
		sum += a[i][j] ; 
		}
	printf("\n���Խ���Ԫ��֮��Ϊ%d\n",sum) ;
	//��������Ԫ�ر���
	for( sum = 0 , i = 0 ; i < 4 ; i++ )
		{for( j = 0 ; j < 4-i ; j++ )
			{printf("%d ", a[i][j] );
			sum += a[i][j] ;
			}
		}
	printf("\n��������Ԫ��֮��Ϊ%d\n",sum) ;
	//��������Ԫ�ر���
	for( sum = 0 , i = 0 ; i < 4 ; i++ )
		{for( j = 0 ; j < i+1 ; j++ )
			{printf("%d ", a[i][j] );
			sum += a[i][j] ;
			}
		}
	printf("\n��������Ԫ��֮��Ϊ%d\n",sum) ;
	//��������Ԫ�ر���
	for( sum = 0 , i = 0 ; i < 4 ; i++ )
		{for( j = 3-i ; j < 4 ; j++ )
			{printf("%d ", a[i][j] );
			sum += a[i][j] ;
			}
		}
	printf("\n��������Ԫ��֮��Ϊ%d\n",sum) ;
	//��������Ԫ�ر���
	for( sum = 0 , i = 0 ; i < 4 ; i++ )
		{for( j = i ; j < 4 ; j++ )
			{printf("%d ", a[i][j] );
			sum += a[i][j] ;
			}
		}
	printf("\n��������Ԫ��֮��Ϊ%d\n",sum) ;
	//�ڲ�Ԫ�ر��� 
	for( sum = 0 , i = 1 ; i < 3 ; i++ )
		{for( j = 1 ; j < 3 ; j++ )
			{printf("%d ", a[i][j] );
			sum += a[i][j] ;
			}
		}
	printf("\n�ڲ�Ԫ��֮��Ϊ%d\n",sum) ;
	//�ⲿԪ�ر��� 
	for( sum = 0 , i = 0 ; i < 4 ; i++ )
		{for( j = 0 ; j < 4 ; j++ )
			{printf("%d ", a[i][j] );
			sum += a[i][j] ;
			}
		}
	printf("\n�ⲿԪ��֮��Ϊ%d\n",sum) ;
	return 0;
}
