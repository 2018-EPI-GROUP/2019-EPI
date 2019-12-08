#include<stdio.h>
int main()
{
	int i,j,a[10],b[10],c[10],sum;
	printf("请输入测试用例个数\n");
	scanf("%d",&i);
	for(j=1;j<=i;j++)
	{
		scanf("%d%d%d",&a[j],&b[j],&c[j]);
		printf("\n");
	}
	for(j=1;j<=i;j++)
	{
		sum=a[j]+b[j];
		if(sum>c[j])
		printf("Case #%d: true\n",j);
		else
		printf("Case #%d: false\n",j);
	}
	return 0;
}
