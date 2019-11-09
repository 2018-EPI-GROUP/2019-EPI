#include<stdio.h>
int main(void)
{
	int  i , j , book[3][4] = { {1,2,3,4} , {1,2,3} , {1,2} } ;
	int (*p)[4]= book ;     //定义行指针
	int *p1 = book[0] ;     //定义列指针 
	for( i = 0 ; i <= 2 ; i++ ){
		for( j = 0 ; j <= 3 ; j++ ){
			printf("%d  " , p[i][j]  ) ;    //行指针  p[i][j]  或  *(p[i]+j) 
		}                                      //或  *(*(p+i)+j)  或   (*(p+i))[j]
		printf("\n") ;
	}
	printf("\n") ;
	for( j = 0 ; j <= 3 ; j++ ){
		printf("%d  " , p1[j] ) ;             //列指针  *(p1+j)   或   *p1 +j   或   p1[j]
	}
	return 0;
}
