#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if(a>90)
 			printf("A");
		else if(80<a<89)
 			printf("B");
		else if(70<a<79)
			printf("C");
		else if(60<a<69)
			printf("D"); 
	else
		printf("E");
	return 0;
 } 
