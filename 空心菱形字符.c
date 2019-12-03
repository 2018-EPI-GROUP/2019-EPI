#include<stdio.h>
int main()
{
	char ch;
	int a,
	    k=0,
	    b,
	    c,
	    n,
	    i,
	    j;
	scanf("%c %d",&ch,&n);
	a=(n-1)/2;
	
    if(n>=3)
 {
	
	for(j=0;j<(n+1)/2;j++)
	{
		
		for(i=k;i<a;i++)
	    printf(" ");
	    if(j==0)
	    printf("%c",ch);
	    else
	    {
	    	printf("%c",ch+j);
	    	for(b=0;b<(2*j-1);b++)
	    	printf(" ");
	    	printf("%c",ch+j);
	    	
		}
		k++;
		printf("\n");
	    
	}
	c=a;
	k=0;
	if(n<=5)
	for(i=1;i<=(n-1)/2-1;i++)
	{
		for(j=0;j<i;j++)
		printf(" ");
		printf("%c",ch+c-1);
		for(j=0;j<2*a-1-k;j++)
		{
			printf(" ");
			k+=2;
		}
		
		printf("%c",ch+c-1);
		c--;
		printf("\n");
		
    }
    else
    for(i=1;i<=(n-1)/2-1;i++)
	{
		for(j=0;j<i;j++)
		printf(" ");
		printf("%c",ch+c-1);
		for(j=0;j<n-4-k;j++)
		{
			printf(" ");
			
		}
		k+=2;
		printf("%c",ch+c-1);
		c--;
		printf("\n");
		
    }
    
	for(i=0;i<a;i++)
	printf(" ");
	printf("%c",ch);
 }
 else
 printf("%c",ch);
}













	
