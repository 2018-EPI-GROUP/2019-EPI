#include<stdio.h>
#include<string.h>
#include<stdlib.h>
                                //��ֻ�ǵ�����**�ı��滻** 

#define N 10                    //��ͨ����� 
#define pi 3.141592653          //��ͨ�����
#define sum N+pi                //����Ҳ�����������Ѿ�������ĺ� 
#define ending ("dead day that came.It's time to go along.\n") //a sentence.
                                //��Ҳ�������κζ��� 
#define  f(x)   ( (x)*(x)*(x) + 8*(x) - 9 )    
//�������ĺ�����ֵ�Լ�ÿ���������ֵĵط���Ҫ**����** 
#define MIN(a,b)  ( (a) > (b) ? (b) : (a) )
//��Ԫ�����  ��? :��     ��һ����ʽ���£����ʽ1 ? ���ʽ2 : ���ʽ3
//���У����ʽ1��һ����ϵ���߼����ʽ�����ʽ2�ͱ��ʽ3�����κκϷ���C���ʽ��
//ִ�й������ȶԱ��ʽ1��ֵ����ֵΪ��0ʱ�����������ʽ��ֵΪ���ʽ2��ֵ��
//�����������ʽ��ֵΪ���ʽ3��ֵ��

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
