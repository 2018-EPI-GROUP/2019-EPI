#include<stdio.h>
static int n = 0; //��̬������ӵ���ڲ����ӣ����ڷ��غ��������õĴ���
int test(void);

int main(void)
{
	int i;
	int a;
	for (i = 0; i < 10; i++)
		a = test();
	printf("������������%d��\n", a);

	return 0;
}

int test(void)    //�ú������ر���õĴ�����
{
	extern int n;
	n++;
	return n;
}