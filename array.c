#include<stdio.h> 
int main(void)
{
	int  n, i , tem ;
	printf("Please input how many number you want to input\n");
	scanf("%d",&n);
	int a[20];
	for( i = 1 ; i <= 20 ; i++ )
		{a[i]=0;}
	for( i = 1 ; i <= n ; i++ )
		{scanf("%d", &tem );
		if(tem > 20)
			{printf("Error:utmost to 20\n");
			i=i-1;
			continue;}
		a[tem] ++;
		}
	for( i = 1 ; i <= 20 ; i++ )
		{if(a[i]==0)
			continue;
		else
			printf("数字%d共出现了%d次\n",i , a[i]);}
	return 0;
}
