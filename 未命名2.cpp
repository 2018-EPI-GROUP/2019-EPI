#include<stdio.h>
int max(int i, int j); 
int main()
{
 
	int i,j;
	printf("输入两个数字，这两个数字之间用空格隔开\n");
	scanf("%d%d",&i,&j);
	printf("%d\n",max(i,j));
}
 
int max(int i, int j)
{
	if(i>j)
		return i;
	else 
		return j; 
}

