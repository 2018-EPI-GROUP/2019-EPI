#include <stdio.h>
#include <time.h>
//延时程序
void sleep(int s) 
{
	time_t tmp1=time(NULL);
	time_t tmp2=tmp1;
	while(difftime(tmp2,tmp1)<s) 
	{ //延时s秒后结束
		tmp2=time(NULL);
	}
}


int main(int argc, char *argv[]) 
{
	int i=1;
	while(i)
	{
		printf ("%d : %s \n",i++,__TIME__);//打印i及程序编译时间
		sleep(1);
		system("cls"); //清屏
	}
	return 0;
}
