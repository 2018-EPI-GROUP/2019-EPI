#include<stdio.h>

typedef struct point{
	int x ;
	int y ; 
	int z ;
}intp;

typedef union p1{
	int a ; 
	char b[4] ;
}fp;
int main(void)
{
	int i ;
	intp n = { 1 , 2 , 3 };
	intp m = n ;
	fp o ;
	o.a = 4 ;
	o.b[0] = 'a' ;
	for( i = 0 ; i < 4 ; i++){
		printf("o.b[%d] = %c\n" , i , o.b[i] ) ;
	}
	printf("%d\n" , o.a );
	printf("Point n location is %i-%i-%i\n" , n.x , n.y , n.z ) ; 
	printf("Point m location is %i-%i-%i\n" , m.x , m.y , m.z ) ;
	return 0 ;
}
