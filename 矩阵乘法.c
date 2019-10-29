#include<stdio.h>

int main(void)

{
	int a,b,c,d;
	int sum=0;
	printf("输入第一个矩阵的行数和列数\n");
	scanf("%d,%d",&a,&b);
	printf("输入第二个矩阵的行数和列数\n");
	scanf("%d,%d",&c,&d);
	int  array_1[a][b];		//第一个数组
	int  array_2[c][d];		//第二个数组
	
	printf("输入第一个矩阵的元素\n");
	for (int i=0;i<a;++i)
		{
			for (int j=0;j<b;++j)
				{
					scanf("%d",&array_1[i][j]);
				}
		}
	
	printf("输入第二个矩阵的元素\n");
	for (int i=0;i<c;++i)
		{
			for (int j=0;j<d;++j)
				{
					scanf("%d",&array_2[i][j]);
				}
		}
	int  re[a][d];		//结果数组
	/*计算结果有误重写
	for (int i=0;i<=a-1;++i)
		{
			for (int j=0;j<=d-1;++j)
				{
					for (int k=0;k<=d-1;++k)
						{
							re[i][j] +=array_1[i][k]*array_2[k][j];
						}
					
				}
		}
	保留错误作为参考*/
	//乘法计算循环
	for (int i=0;i<a;++i)
		{
			for (int j=0;j<d;++j)
				{
					for (int k=0;k<b;++k)
						{
							sum += array_1[i][k]*array_2[k][j];
						}
					re[i][j]=sum;
					sum = 0;      //sum的值对下一次计算有影响，第一次忘记对其清零，导致计算错误
				}
		}
	printf("结果为:\n");
	for (int i=0;i<a;++i)
		{
			for (int j=0;j<d;++j)
				{
					printf("\t%-4d",re[i][j]);
				}
			printf("\n");
		}
	return 0;
}