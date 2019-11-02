#include<stdio.h>
int main()
{
	int i,a[10];
	//int a[10];t=[10]的意义不同前者是定义数组，后者是引用t[10] 
	for(i=0;i<=10;i++)
	a[i]=i;
	for(i=9;i>=0;i--)
	//a[10]有的数是0~9，并不是1~10； a[10]代表的是是9 
	printf("%d",a[i]);
	return 0;
 } 
