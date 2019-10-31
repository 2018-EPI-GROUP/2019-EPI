#include<stdio.h>
main()
{
	char s[81]="\nHello!",
	     *p=s;
    char *ps="Welcome to you!";
	printf("%s\n",s);
	printf("%s\n",ps);
	gets(s);
	printf("%s\n",s);
	gets(p);
	printf("%s\n",s); 
}
