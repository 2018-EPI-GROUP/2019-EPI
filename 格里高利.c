#include <stdio.h>
#include <math.h>
int main()
{
    double eps,
	       pi,
		   sum=0.0,
		   a;
    
	int n=1;
    
	scanf("%lf",&eps);
    
	for(n=1;1;n++)
    {
    	
        sum+=pow(-1,n+1)*(1./(2*n-1));
        
		a=1./(2*n-1);
    	
		if(a<eps) break;
    }
    pi=4.*sum;
    printf("Pi = %.4lf",pi);

}
