#include<stdio.h>
#include<math.h>
int prime(int m);

int prime(int m)
{
    int i;
    if(m==1)
    return 0;
    else if(m==2)
    return 1;
    else 
    {
        for(i=2;i<m-1;i++)
        
            if(m%i==0)
            return 0;
            return 1;
        
    }
}

int main()
{
    int i,
	    a=0;
    for(i=1;i<=99;i++)
    {
        if(prime(i))
        {
            printf("%6d",i);
            a+=1;
            if(a!=0&&a%10==0)
            printf("\n");
        }
         
    }
}

