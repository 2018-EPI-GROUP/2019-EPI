#include <stdio.h>
# include <string.h>
# define MAXLINE 80
void encrypt ( char *s);
int main (void)
{
   char line [MAXLINE];

   gets(line);
   encrypt (line);
   printf ("%s\n", line);
	 return 0;
}


void encrypt( char *s)
{
	int i;
	for(i=0;i<80;i++)
	{
		if(*(s+i)=='z')
		{
			*(s+i)='a';
			continue;
		}
		if(*(s+i)=='\0')
		break;
		
		
		*(s+i)+=1;
	}
	
}
