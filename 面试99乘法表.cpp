#include<stdio.h>
int main()
{
	int a[10][10];
	for(int i=0;i<10;i++)
	{
		a[i][0]=i;
		a[0][i]=i;
	}
	for(int i=1;i<10;i++)
	{
		for(int j=1;j<10;j++)
		{
			a[i][j]=a[i][0]*a[0][j];
		}
	}
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<10;j++)
		{
			if(a[i][j])
			printf("%5d",a[i][j]);
			else
			printf("     %0");
		}
		printf("\n");
	}
	return 0;
}







