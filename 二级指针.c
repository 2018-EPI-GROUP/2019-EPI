#include<stdio.h>
main()
{
	static int s[5]={10,20,30,40,50};
	int *q[5]={&s[0],&s[1],&s[2],&s[3],&s[4]};
	int **p;
	for(p=q;p<q+5;p++)
	{
		printf("%d\t",**p);
	}
 } 
