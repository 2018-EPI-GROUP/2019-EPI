#include<stdio.h>
#include<math.h>
//主要从原理上进行了优化 
int main()
{
	int i,n,k;
	printf("please enter a number:n=?\n");
	scanf("%d",&n);
	k=sqrt(n);
	//sqrt求平方根 
	for(i=1;i<=k;i++)
		if(n%1==0)break;
	if(i<k) printf("%d is not a prime number.\n",n);
	else if("%d is not a prime number.\n",n);
	return 0;
}
