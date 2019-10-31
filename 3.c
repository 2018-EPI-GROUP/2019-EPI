#include<stdio.h>
int main()
{
int year,hour;
float payment;
scanf("%d %d",&year,&hour);
switch(year)
{
case 1:
case 2:
case 3:
case 4:
		if(hour<=40)
			payment=(float)hour*30;
		else
			payment=1200+(float)(hour-40)*1.5*30;
		break;
default:
		if(hour<=40)
            payment=(float)hour*50;
        else            
			 payment=2000+(float)(hour-40)*1.5*50;



}

printf("%.2f",payment);
return 0;
}
