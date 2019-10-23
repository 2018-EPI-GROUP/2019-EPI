#include<stdio.h>
#include "Array.h"

int j_num;
int i_num;

//输入行列式的阶数
int inputN (void)
{
	int n;
	printf ("请输入行列式的阶数\n");
	scanf ("%d",&n);
	return n;
}
//得到随机数表的行数
int get_lineNumOf_randomList (int n)
{
	if ( n==1 ) 
	return 1;

	return ( n*get_lineNumOf_randomList(n-1) );
}

//为行列式赋值
void assign ( int* a, int n )
{
	j_num = n;
	i_num = get_lineNumOf_randomList(n);
	printf ("请依次为行列式的每一项赋值\n");
        for ( int i=0; i<n; i++ )
        {
                printf ("请为第%d行赋值\n",i+1);
		for ( int j=0; j<n; j++ )
		{
			int num;
			scanf ("%d",&num);
		        *( (a+i*n)+j ) = num;
		}
        }
	
}
//计算数组的逆序数
int get_inversNum ( int* Array, int num )
{
	int inversNum=0;
	for( int i=0; i<num; i++ )
	{
		for( int k=0; k<i; k++ )
		{
			if( Array[i] < Array[k] )
			 inversNum++;
		}
	}
		printf("inversNum=%d\t",inversNum);
		if ( inversNum%2==0 && inversNum!=1 ) return 1;

		return -1;
}


int count ( int* det, int* r_list, int n, int r_i )
{
	int sum=0;

	for ( int j=0; j<r_i; j++ )
 	{
		int p_sum=1;

		for ( int i=0; i<n; i++ )
		{
			p_sum*= *( ( det+i*n ) + *( r_list+j*n+i ) - 1 );
		}
			int x = get_inversNum ( r_list+j*n, n );
			if ( x!=1) p_sum = -p_sum;
			printf("p_sum=%d\n",p_sum);
			sum+=p_sum;
	}

	return sum;
}



int main (void) 
{	
	int n = inputN();
	int a[n][n];
	assign ( *a, n );
	int random_Num_List[i_num][j_num];
	get_Random_List ( i_num, j_num, *random_Num_List );
	printf("------------randomlist------------------\n");
	for (int i=0;i<i_num;i++)
	{
		for(int j=0;j<j_num;j++)
		{
			printf("%d\t",random_Num_List[i][j]);
			
		}
		printf("\n");	
	}
	printf("------------det-------------------------\n");

	for (int i=0;i<n;i++)
        {
                for(int j=0;j<n;j++)
                {
                        printf("%d\t",a[i][j]);
                }
                printf("\n");   
        }
	
	printf("-----------------------------------------\n");

	int sum=count( *a, *random_Num_List, j_num, i_num  );

	printf("-----------------------------------------\n"); 
	
	printf("sum=%d\n",sum);

}
														
																// 2019-10-10 

