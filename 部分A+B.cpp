#include<stdio.h>
int qiuhe(int A,int a);
int main()
{
	int A,B;
	int a,b;
	printf("ÇëÊäÈëÊı¾İ\n");
	scanf("%d%d%d%d",&A,&a,&B,&b);
	printf("%4d\n",qiuhe(A,a)+qiuhe(B,b));
	return 0;
}
int qiuhe(int A,int a)
{
	int sum;
	while(A>0)
	{
		if(A%10==a)
			sum=sum*10+a;
		A=A/10;	
	}
	return sum;
}
