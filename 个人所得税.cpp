#include<stdio.h>
#include<math.h>
int main()
{
    int x;
    double y,z,a;
    scanf("%d",&x);
    if(x<=1600)
      y=0.00;
    else if(x<=2500)
      y=0.05;
    else if(x<=3500)
      y=0.10;
    else if(x<=4500)
      y=0.15;
    else
      y=0.20;
    z=y*(x-1600);
    a=fabs(z);
    printf("%.2lf",a);
    return 0;
}
