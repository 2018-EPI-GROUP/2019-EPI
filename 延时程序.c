#include <stdio.h>
#include <time.h>
//��ʱ����
void sleep(int s) 
{
	time_t tmp1=time(NULL);
	time_t tmp2=tmp1;
	while(difftime(tmp2,tmp1)<s) 
	{ //��ʱs������
		tmp2=time(NULL);
	}
}


int main(int argc, char *argv[]) 
{
	int i=1;
	while(i)
	{
		printf ("%d : %s \n",i++,__TIME__);//��ӡi���������ʱ��
		sleep(1);
		system("cls"); //����
	}
	return 0;
}
