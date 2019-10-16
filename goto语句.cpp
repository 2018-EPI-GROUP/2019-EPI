#include<stdio.h>
main()
{
	int n=1,sum=0;
	loop:sum+=n;
	n++;
	if(n<=200)
	goto loop;
	printf("%d\n",sum);
 } 
