#include<stdio.h>
int main()
{
	int i,a[10];
	//int a[10];t=[10]�����岻ͬǰ���Ƕ������飬����������t[10] 
	for(i=0;i<=10;i++)
	a[i]=i;
	for(i=9;i>=0;i--)
	//a[10]�е�����0~9��������1~10�� a[10]���������9 
	printf("%d",a[i]);
	return 0;
 } 
