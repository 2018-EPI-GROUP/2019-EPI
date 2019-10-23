#include<stdio.h>
#include<string.h>
int main ( int argc, char *argv[] )
{
	FILE *fp = fopen ( argv[1], "w" );
	if ( fp ==NULL )
	{
		return -1;	
	}
	
	char buf[1024];	
	while(1)	
	{	
		fgets( buf, sizeof(buf), stdin ); 
		if( strncmp ( buf, ":wq",3 ) == 0 )  // if user print ":wq",stop 
		{
			break;	
		}

		int i = 0;
		while ( buf[i] != '\0')
		{
			fputc( buf[i],fp );
			i++;	
		}
	}

		return 0;
}
