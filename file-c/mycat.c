#include<stdio.h>

int main ( int argc, char *argv[] )
{
	FILE *fp = fopen( argv[1], "r" );
	if ( fp == NULL )
	{	perror("error");
		return -1;
	}
	
	char ch;	
	while(1)	
	{
		ch = fgetc(fp);	
		if ( feof(fp) )
		{
			break;	
		}
		printf("%c",ch);
	}
	
	fclose(fp);
	printf("\n");
	return 0;

}
