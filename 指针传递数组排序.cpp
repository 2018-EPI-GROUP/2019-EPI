#include<stdio.h>
int paixu(int *p);
main()
{
	int a[10]={12,54,73,58,28,9,61,50,44,37};
	paixu(a);
 } 
int paixu(int *p)
{
	int i,j,t;
	for(i=0;i<9;i++)
	   for(j=i+1;j<=9;j++)
	   	if(*(p+i)>*(p+j))
	   	{
	   		t=*(p+i);
	   		*(p+i)=*(p+j);
	   		*(p+j)=t;
		   }
	for(i=0;i<10;i++)
	  printf("%4d",*(p+i)) ;
}

