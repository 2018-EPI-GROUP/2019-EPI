#include<stdio.h>
#include<string.h>


void write_file()
{
	//1,打开文件
	FILE *fp = fopen ("2.txt","w");
	if ( fp == NULL )
	{
		perror ("write_file fopen");
		return;	
	
	}
	
	//2.写文件
	char *p = ("abcdef");
	int i = 0;
	int n = strlen(p);
	for ( i=0;i<n;i++ )
	{
		fputc( p[i], fp ) ;	
	}
		
	//3.关闭文件
	fclose(fp);
}

void read_file()
{
	//1,打开文件
	FILE *fp = fopen ("2.txt","r");/*注意这里不能用w w会把文件内容清空*/
	if ( fp == NULL )
	{
		perror ("read_file fopen");
		return;	
	
	}
	
	//2.读文件
	
/*	char ch;
	
	ch = fgetc( fp ) ;	
	printf("ch=%c\n",ch);	

	 ch = fgetc( fp ) ;	
	printf("ch=%c\n",ch);	

	 ch = fgetc( fp ) ;	
	printf("ch=%c\n",ch);	

	//内部会实现光标的自动移动
	//当然要把文件读完用循环, 注意文件末尾系统会自动加上-1, 也就是EOF
*/	

	char ch;
	while(1)	
	{
		ch = fgetc( fp ) ;	
		printf("ch=%c\n",ch);	
	
		if ( ch == EOF)
		{
			break;		
		}
	}			


	//3.关闭文件
	fclose(fp);
}


int main (void)
{

	write_file();
	read_file();
		
	return 0;
}
