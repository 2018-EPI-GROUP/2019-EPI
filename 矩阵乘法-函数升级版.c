#include<stdio.h>

void printf_array(int array[][100],int m,int n);
void scanf_array(int array[][100],int m,int n);
void chengfa(int array_1[][100],int array_2[][100],int re[][100],int a,int b,int d);

int main(void)
{
	int a,b,c,d;
	int sum=0;
	printf("输入第一个矩阵的行数和列数(用逗号隔开)\n");
	scanf("%d,%d",&a,&b);
	printf("输入第二个矩阵的行数和列数(用逗号隔开)\n");
	scanf("%d,%d",&c,&d);
	int array_1[a][b];    //第一个矩阵
	int array_2[c][d];   //第二个矩阵
	printf("输入第一个矩阵%d个元素(用空格隔开)\n",a*b);
	scanf_array(array_1,a,b);
	printf("输入第二个矩阵%d个元素(用空格隔开)\n",c*d);
	scanf_array(array_2,c,d);
	int re[a][d];
	printf("您输入的第一个矩阵为:\n");
	printf_array(array_1,a,b);
	printf("您输入的第二个矩阵为:\n");
	printf_array(array_2,c,d);
    chengfa(array_1,array_2,re,a,b,d);
	//输出结果
	printf("结果为:\n");
	printf_array(re,a,d);
}

//数组输出函数
void printf_array(int array[][100],int m,int n)
{
	for (int i=0;i<m;++i)
		{
			for (int j=0;j<n;++j)
				{
					printf("\t%-4d",array[i][j]);
				}
			printf("\n");
		}
}

//数组输入函数
void scanf_array(int array[][100],int m,int n)
{
	for (int i=0;i<m;++i)
		{
			for (int j=0;j<n;++j)
				{
					scanf("%d",&array[i][j]);
				}
		}
}

//乘法计算函数
void chengfa(int array_1[][100],int array_2[][100],int re[][100],int a,int b,int d)
{
	int sum=0;
		 for (int i=0;i<a;++i)
	 	{
	 		for (int j=0;j<d;++j)
	 			{
	 				for (int k=0;k<b;++k)
	 					{
	 						sum += array_1[i][k]*array_2[k][j];
	 					}
	 				re[i][j] = sum;
	 				sum = 0;
	 			}
	 	}
}