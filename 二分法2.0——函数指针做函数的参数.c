#include<stdio.h>
#include<math.h>
double f1(double x)
{return x*x-8*x-2;}

double f2(double x)
{return x*x*x*x-13*x-23;}

double f3(double x)
{return x*x*x-2*x-23;}

double bisection(double l,double r,double(*f)(double))
{
	double mid;
	if(f(l)*f(r)>0)
		{printf("Error");}
	
	while(fabs(l-r)>0.00000001)
		{mid=(l+r)/2;
		 if(f(l)*f(mid)<0)
			{r=mid;}
		 else
		 {l=mid;}
		}
return mid;
}

int main(void)
{
	printf("\n%lf",bisection(0,10,f1));
	printf("\n%lf",bisection(0,10,f2));
	printf("\n%lf",bisection(0,10,f3));
return 0;
} 
