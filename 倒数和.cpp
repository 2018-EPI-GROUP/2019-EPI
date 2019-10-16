#include<stdio.h>
main()
{
	int n;
	double i,sum;
	n=1,i=1.0,sum=0;
	while(n<=100)
	{
		sum+=i/n;
		i=-i;
		n++;
	}
	printf("%f\n",sum);
 } 
