#include<stdio.h>
int main()
{
	int n,i;
	printf("please enter a integer number,n=?");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	if(n%i==0)break;
	if(i<n) printf("%d is not a prime number.\n",n);
	else if("%d is a prime number.\n",n);
	return 0;
}
