#include<stdio.h>
int main()
{
    int n;
    scanf ("%d",&n);
    int hun;
    int ten;
    int one;
    hun=n/100;
    one=n%10;
    ten=(n-(100*hun+one))/10;
    one=100*one;
    ten=10*ten;
    n=one+ten+hun;
    printf("%d",n);
    return 0;



}

