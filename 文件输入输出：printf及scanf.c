#include<stdio.h>

int main(void)
{
	int    a   = 12       ; 
	int    b   = 4        ;
	int    len = 6        ;
	double c   = 23.2563  ;
	char   d   = 'A'      ;
	char   sen1[20]       ;
	char   sen2[20]       ;
	
//Scanf���� 
	scanf("%*d%d"       , &a ) ;    //��* ����ʾ���������� 
	
	scanf("%i"          , &b ) ;    //��%i ����ʾ�ɶ���ʮ�����ơ�ʮ���ơ��˽��Ƶ����� 
	
	scanf("%*[^,],%[^,],%[^.].", &sen1 , &sen2 ) ;
								    //��[^,] ����ʾ��*����ǰ����ַ���*		
	printf("%s\n" , sen1 ) ;
	printf("%s" , sen2 ) ;
	
//Printf��� 
	printf("%-9d#\n"     , a ) ;    //��9 ����ʾ���ռ�Ÿ��ֽڣ� ��- ����ʾ������� 
	
	printf("%+d\n"       , b ) ;    //��+ ����ʾʹ������������� 
	
	printf("%*d\n" , len , a ) ;    //��* ����ʾ��һ���������ַ���������"len"����,
									//��ɡ�%6d �������������������һ��ʹ�� 
	
	printf("%.7f\n"      , c ) ;    //��.number ����ʾ��ʾС�����nλ 
	
	printf("%hhc\n"      , d ) ;    //��hh ����ʾ��������ֽ� 
	
	printf("%d\n"       , a  ) ;    //��n ����ʾ�ӿ�ʼ��nǰ��������ٸ��ַ� 

	
	return 0 ;
}
