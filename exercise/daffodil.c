/* Print 100~999 daffodils */ 
#include <math.h>
#include <stdio.h>

double pow(double a, double b)
{
	int i = 0;
	int x = a;
	for(i = 0; i<b-1; i++)
	{
		a*=x;	
	}
	return a;
}

int main01(void)
{
	int i = 0;
	for(i = 100; i<1000; i++)	
	{
		int a = i % 10; 		
		int b = (i % 100)/10;
		int c = i*10/1000;
		if(i == a*a*a +b*b*b +c*c*c)
		{
			printf("%d\n", i);		
		}
	}	


}

int main(void)
{
	double b = 2.0;
	double y = 3.0;
	printf("%lf\n",pow(b,y));

	return 0;	
}
