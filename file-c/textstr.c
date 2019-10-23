#include<stdio.h>
#include<string.h>


void write_file ()
{
	char buf[10];
	while (1)
	{
		fgets ( buf, sizeof(buf), stdin );	

		if ( strncmp (buf,":wq",3)==0 )	
		{
			break;	
		}
		printf("%s",buf);
	}
	printf("%s",buf);
	
}




int main ( int argc, char *argv[] )
{
	write_file();
	return 0;
}
