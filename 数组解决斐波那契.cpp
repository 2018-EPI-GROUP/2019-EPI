#include<stdio.h>
int main()
{
	int i;
	int f[20]={1,1};
	for(i=2;i<20;i++)
		f[i]=f[i-2]+f[i-1];
		//计算出数 ,先存起来 
	for(i=0;i<=20;i++)
	/*（if(i%5==0) printf("\n"))
	控制一行5个数自动换行*/ 
	printf("%8d",f[i]);
	return 0;  
 } 
