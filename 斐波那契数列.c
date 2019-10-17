#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c,n;
    int sum=1,a=1,b=1,i=1;
    printf("请输入所要显示的斐波那契数列前几项:");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        printf("%d\t",a);
        break;
    case 2:
        printf("%d\t",a);
        printf("%d\t",b);
        break;
    default:
        printf("%d\t",a);
        printf("%d\t",b);
        for(i=3;i<=n;i++)
        {
            c=sum;
            sum=sum+b;
            b=c;
            printf("%d\t",sum);
        }
    }
    return 0;
}
