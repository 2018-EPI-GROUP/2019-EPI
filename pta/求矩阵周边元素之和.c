#include<stdio.h>
int main()
{
int m,n,i,j,sum=0;
int a[10][10];
scanf("%d %d",&m,&n);
for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	{
	scanf("%d",&a[i][j]);
	if(i==0||i==m-1||j==0||j==n-1)
	 sum+=a[i][j];
	}
	printf("%d",sum);
return 0;
}
