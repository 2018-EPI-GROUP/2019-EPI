#include<stdio.h>

struct point{
	
	int a  ;
	
	int b  ;
	
	int c ;
} ;

struct point *getstruct(struct point *fp1)
{	
	scanf("%d" , &(*fp1).a ) ;
	
	scanf("%d" , &(*fp1).b ) ;
	
	scanf("%d" , &(*fp1).c ) ;
	
	printf("fp1         %d-%d-%d \n" , (*fp1).a , (*fp1).b , (*fp1).c ) ;
	
	return  fp1 ;
}

struct point gotstruct(void)
{	
	struct point temp ;
	
	scanf("%d" , &temp.a ) ;
	
	scanf("%d" , &temp.b ) ;
	
	scanf("%d" , &temp.c ) ;
	
	printf("temp        %d-%d-%d \n" , temp.a , temp.b , temp.c ) ;
	
	return  temp ;
}

int main(void)
{
	struct point p1= { 1 , 2 , 3 };
	
	struct point p2= { 4 , 5 , 6 };
	
	printf("P1(before)  %d-%d-%d \n" , p1.a , p1.b , p1.c ) ;
	
	printf("P2(before)  %d-%d-%d \n" , p2.a , p2.b , p2.c ) ;
	
	struct point *fp = &p1 ;
	
	getstruct(fp);              //´«Ö¸Õë 
	
	p2 = gotstruct() ;          //´«Õû¸ö½á¹¹ 
	
	printf("P1(after)   %d-%d-%d \n" , p1.a , p1.b , p1.c ) ;
	
	printf("P2(after)   %d-%d-%d \n" , p2.a , p2.b , p2.c ) ;
	
	return 0 ;
}
