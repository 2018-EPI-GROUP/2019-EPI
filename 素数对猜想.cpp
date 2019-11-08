#include<stdio.h>
#include<math.h>
int a[100000];
main()
{
	int i,j,t,n,b;
	printf("请输入一个数\n");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	 {
	     for(j=2;j<=sqrt(i);j++)
	   {
	   	   if(i%j==0) break;
		} 
		if(j>sqrt(i))
		a[t++]=i;
	}
	for(i=1;i<=n;i++)
	 {
	 	if(a[i+1]-a[i]==2) 
	 	b++;
	 }
	 printf("%d",b);
}
