#include<stdio.h>
int main(void)
{
	int m,n;
	printf("输入矩阵的行数和列数\n");
	scanf("%d,%d",&m,&n);
	int array[m][n];
	/*如果定义的数组的容量为变量，
	那么不能对数组进行初始化。*/
	printf("输入%d个数字\n",m*n);
	for (int i=0;i<m;++i)
		{
			for (int j=0;j<n;++j)
				scanf ("%d",&array[i][j]);
		}
	for (int i=0;i<m;++i)
		{
			for (int j=0;j<n;++j)
				printf("\t%-4d",array[i][j]);
				printf("\n");
		}
	return 0;
}