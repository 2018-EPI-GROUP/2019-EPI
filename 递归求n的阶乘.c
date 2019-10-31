#include<stdio.h>
long int fa(unsigned int n)
{
	long int f;
	if(n==0)
	return 1;
	f=fa(n-1)*n;
	return (f);
	
} 

main()
{
	
	unsigned int n;
	scanf("%u",&n);
	printf("%u!=%10ld",n,fa(n));
	
}
 

