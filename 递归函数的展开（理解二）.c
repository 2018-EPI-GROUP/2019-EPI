#include <stdio.h>
void fun(int n)
{
	if(n>0)
	{
		printf("%d\n",n);
		fun(n-1);
		printf("%d\n",n);
	}	
}

int main()
{ 
	fun(4);//�����4 3 2 1 1 2 3 4
	//֮���Գ��������Ľ������Ϊ�ݹ�����ԣ�����ʼǵݹ麯�� 
	
	return 0;
}
