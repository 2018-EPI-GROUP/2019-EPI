#include<stdio.h>
main()
{
	int a[2][2]={{1,2},{3,4}};
	int b[2][2]={{5,6},{7,8}};
	int *i,*j;
	int (*p)[2],(*q)[2];
	for(p=a,q=b;p<a+2;p++,q++)
	  { for(i=*p,j=*q;i<*p+2;i++,j++)
	   {
	   	*i+=*j;
	   	printf("%4d",*i);
	   }
	   printf("\n");
	   } 
	   return 0;
}
