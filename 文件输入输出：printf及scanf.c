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
	
//Scanf输入 
	scanf("%*d%d"       , &a ) ;    //“* ”表示跳过此输入 
	
	scanf("%i"          , &b ) ;    //“%i ”表示可读入十六进制、十进制、八进制的整数 
	
	scanf("%*[^,],%[^,],%[^.].", &sen1 , &sen2 ) ;
								    //“[^,] ”表示读*逗号前面的字符串*		
	printf("%s\n" , sen1 ) ;
	printf("%s" , sen2 ) ;
	
//Printf输出 
	printf("%-9d#\n"     , a ) ;    //“9 ”表示输出占九个字节， “- ”表示靠左对齐 
	
	printf("%+d\n"       , b ) ;    //“+ ”表示使输出带上正负号 
	
	printf("%*d\n" , len , a ) ;    //“* ”表示下一个参数是字符数，即将"len"填入,
									//变成“%6d ”，常与其他输入输出一起使用 
	
	printf("%.7f\n"      , c ) ;    //“.number ”表示显示小数点后n位 
	
	printf("%hhc\n"      , d ) ;    //“hh ”表示输出单个字节 
	
	printf("%d\n"       , a  ) ;    //“n ”表示从开始到n前共输出多少个字符 

	
	return 0 ;
}
