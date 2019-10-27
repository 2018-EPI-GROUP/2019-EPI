#include<stdio.h>




int main (void)
{
	int a;
	scanf("%d",&a);
	int b=a/10;
	double bonus;
	switch(b)
	{
		case 0 : bonus = a*1.1; break;	
		case 1 : bonus = 10*1.1 + (a-10)*1.075; break;						
		case 3 :
		case 2: bonus = 10*1.1 + (20-10)*1.075 + (a-20)*1.05; break;		
		case 5 :
		case 4 : bonus = 10*1.1 + (20-10)*1.075 + (40-20)*1.05 + (a-40)*1.03;	break;	
		case 7 :
		case 8 :
		case 9 :
		case 6 : bonus = 10*1.1 + (20-10)*1.075 + (40-20)*1.05 + (60-40)*1.03 + (a-60)*1,015; break;		
		case 10 : bonus = 10*1.1 + (20-10)*1.075 + (40-20)*1.05 + (60-40)*1.03 + (100-60)*1,015 + (a-100)*1.01; break;	
	}
	printf( "bonus = %lf\n", bonus );

	return 0;
}
