#include<stdio.h>
int main()
  {
   double a,b,i;
   scanf("%lf %lf",&a,&b);
   i=(a-b)/b*100;
   if(i>=51)
   printf("Exceed %.0lf\%%.Lincense Revoked",i);
   else if(i>=10)
  printf("Exceed %.0lf\%%.Ticket 200",i);
  else
  printf("OK") ;
 return 0;
  }

