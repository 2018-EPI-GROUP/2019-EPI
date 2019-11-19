#include<stdio.h>
#include<string.h>
#include<stdlib.h>
                                //宏只是单纯的**文本替换** 

#define N 10                    //普通定义宏 
#define pi 3.141592653          //普通定义宏
#define sum N+pi                //宏中也可以有其他已经定义过的宏 
#define ending ("dead day that came.It's time to go along.\n") //a sentence.
                                //宏也可以是任何东西 
#define  f(x)   ( (x)*(x)*(x) + 8*(x) - 9 )    
//带参数的宏整个值以及每个参数出现的地方都要**括号** 
#define MIN(a,b)  ( (a) > (b) ? (b) : (a) )
//三元运算符  “? :”     其一般形式如下：表达式1 ? 表达式2 : 表达式3
//其中，表达式1是一个关系或逻辑表达式，表达式2和表达式3均是任何合法的C表达式。
//执行过程是先对表达式1求值，其值为非0时，则整个表达式的值为表达式2的值；
//否则，整个表达式的值为表达式3的值。

int main(void)
{
	int a[N] = {1 , 3 , 75 , 5 , 8 , 9 , 6 , 5 };
	
	int i = 0 ;
	
	double b = pi ;
	
	printf("sum      = %f \n" , sum ) ;
	
	printf("MIN(3,5) = %d\n" , MIN(3,5)) ;
	
	printf("f(20)    = %d\n" , f(20) ) ;
/*	
	printf("The doucument name is %s\n" , __file__) ;
	
	printf("This is line %d\n" , __line__) ;
	
	printf("Today is %s\n" , __date__) ;
	
	printf("Now is %s\n" , __time__) ;
*/	
	printf ending ;
	
	while (a[i]){
	
		printf("a[%d] = %d\n" , i , a[i]) ;
	
		i++ ;
	}
	return 0 ;
}
