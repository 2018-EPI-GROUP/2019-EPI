#include <stdio.h>
#include <stdlib.h>

int main()
{
 int i,j,a,b;
     for(i=1000;i<=9999;i++)//1312
       {
            a=i%100;
            b=i/100;

            if(i==(a+b)*(a+b))
                printf("%5d",i);
       }
    return 0;
}

