#include<stdio.h>
main()
{
	int i,j,n;
	for(i=1;i<=9;i++)
	 {
	     for(j=1;j<=i;j++)
	   {
	   	n=i*j;
	   	printf("%3dx%d=%d",j,i,n);
	   }
	   printf("\n");
    }
 } 
