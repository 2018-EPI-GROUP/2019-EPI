#include"stdio.h"
main()
{
	int j,i;
	double sum,t;
	sum=0;
	for(i=1;i<=100;i++)
	{
		t=1;
		for(j=1;j<=i;j++)
		
			t=t*j;
			sum=sum+t;
		
	}
	printf("1!+2!+...+100!=%f\n",sum) ;
}
