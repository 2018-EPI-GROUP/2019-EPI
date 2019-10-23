#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#include "Array.h"

#define numOfArray sizeof(one_Line)/sizeof(*one_Line)

//函数:检查某元素是否属于数组
int if_Num_Bel_Array ( int r, int *a, int num )
{
	int ret=0;
        for( int i=0; i<num; i++ )
        {
                if( r==*(a+i) )   ret=1;
        }
        return ret;
}
//函数:检测两个数组是否相同
int if_Two_Array_Equal ( int *a1, int *a2, int num )
{
	int ret=1;	
	for( int i=0; i<num; i++ )
	{
		if( *(a1+i)!=*(a2+i) )	ret=0;	
 	}
	return ret;
}
//函数:检测一个数组是否可以放入二维数组
int if_anArray_AddTo_twoClassArray (int *twoClassArray, int *Array, int num, int lineNum )
{
        int ret=1;
        for ( int i=0; i<lineNum; i++ )
        {
                if ( if_Two_Array_Equal( ( twoClassArray+num*i ), Array, num )  )
                        ret=0;
        }
        return ret;
}


//函数:将一个数组遍历打印
void print_One_Line ( int *Array,int num )
{
	for( int i=0; i<num; i++ )
	{ 
		printf( "%d", *(Array+i) );
	}
	printf("\n");	
}

//函数:交换数组
void change_Array ( int *Array1, int *Array2, int num )
{       
        for( int i=0; i<num; i++ )
        {       
                Array1[i]=Array2[i];
        }
}

//打印随机数表
void get_Random_List( int i_num, int j_num, int *random_Num_List )
{
	srand( time(0) );
	
	for( int i=0; i<i_num; )
	{ 
		int one_Line[j_num];
		int printLine[j_num];
			
		for( int i=0; i<j_num; i++ )
		{
			one_Line[i]=i+1;	
		}	

		for( int i=0; i<j_num; )
		{
			int r=rand()%j_num+1;

			if( if_Num_Bel_Array( r, one_Line, numOfArray ) )	
			{
				one_Line[r-1]=0;
				printLine[i]=r;

				i++;	
			}
		}

	//	print_One_Line ( printLine, numOfArray );		

		if ( if_anArray_AddTo_twoClassArray( random_Num_List, printLine, numOfArray, i_num ) ) 
		{	
				change_Array(  random_Num_List+i*j_num, printLine, numOfArray );
			
				i++;
		}
	
	}
	
}


