#include<stdio.h>
#define N 5
main()
{
	int i,j,A[N-1][N]={3,4,6,3,9,6,1,8,4,2,9,4,6,3,6,9,0,1,7,4,};
	int B[N][N-1];
	printf("行列式A为：\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%4d",A[i][j]);
			B[j][i]=A[i][j];
		}
		printf("\n");
	}
	printf("行列式A的转置行列式为：\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<4;j++)
		printf("%4d",B[i][j]);
		printf("\n");
	}
}
