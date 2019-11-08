#include<stdio.h>
main()
{
	char c[]={"invest yourself"},*p=c;
	printf("%s\n",c);
	puts(p);
	gets(c);
	printf("%s\n",c);
	gets(p);
	printf("%s\n",c);
 } 
