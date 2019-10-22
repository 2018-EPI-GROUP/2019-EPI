#include<stdio.h>
int main()
{
   
    int x, y,N; 
    scanf("%d",&N);
    for (y = 1; y <= N; y++) 
    {
        for (x = 1; x <= y; x++)
        {
            printf("%d*%d=%-4d", x, y, x * y); 
        }
        printf("\n"); 
    }
    return 0;
}
