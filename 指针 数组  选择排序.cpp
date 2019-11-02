#include<stdio.h>
main()
{
	int a[10]={21,65,84,46,9,36,28,77,59,11};
	int *p=a,i,j,t;
	for(i=0;i<9;i++)
	    for(j=i+1;j<=9;j++)
	   	  if(*(p+i)>*(p+j))
	   	  {
	   	  	t=*(p+i);
	   	  	*(p+i)=*(p+j);
	   	  	*(p+j)=*(p+i);
			 }
	   printf("ÅÅÐòºóÎª£º\n");
	   for(i=0;i<10;i++)
	   printf("%4d",*(p+i));
}
