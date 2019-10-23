#include<stdio.h>
#include<string.h>


int main (int argc, char *argv[])
{
	FILE *fp = fopen("2.txt", "w"); 

	fprintf(fp, "%c\n",'I');
	fprintf(fp, "%c\n", 'l');
	fprintf(fp, "%c\n", 'o');
	fprintf(fp, "%c\n", 'v');
	fprintf(fp, "%c\n", 'e');
	fprintf(fp, "%c\n", 'y');
	fprintf(fp, "%c\n", 'o');
	fprintf(fp, "%c\n", 'u');

	fclose(fp);

	fp = fopen("2.txt", "r");
	while(1)
	{
		char ch = fgetc(fp);
		if( feof(fp) )
		{
			break;	
		}	

		printf("%c",ch);
		
	}		
	return 0;
}
