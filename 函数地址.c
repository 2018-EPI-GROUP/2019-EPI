#include <stdio.h>

int fun (int a)
{
	printf("����fun\n");
	return 0;
}

int main()
{
	//����fun������������int(int a)��Ҳ����˵��ַҲ��int (int a)
	//��Ҫ����һ��ָ����ָ������ַ�ķ�����
	int (*p)(int) = fun;
	p();
	return 0;
}

