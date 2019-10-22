
#include<stdio.h>
#include<math.h>
int main()
{
    int money,year;
    double sum,rate,a,b;
    scanf("%d %d %lf",&money,&year,&rate);
    b=1+rate;
    a=pow(b,year);
    sum=money*a;
    printf("sum = %.2lf",sum);
    return 0;
}
