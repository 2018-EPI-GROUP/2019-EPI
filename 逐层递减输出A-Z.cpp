#include<stdio.h>
int main()
{
    int n,i,j,a;
    char c='A';
    scanf("%d",&n);
    a=n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<a;j++)
        {
            printf("%c ",c);
            ++c;
        }
        printf("\n");
        --a;
    }
    return 0; 

}
