#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

void write_file ()
{
	FILE *fp = fopen("z.txt", "w");
	if ( fp == NULL )
	{
		perror ("error");	
	}
	char buf[1024];
	srand ( (unsigned int)time(NULL) );
	int num = 0, i = 0;
	for (i = 0; i<100; i++)
	{
		num = rand()%100;
		sprintf(buf, "%d\n", num);
		fputs(buf,fp);//put string of buf into file,not put `\0` 
	
	}
	fclose(fp);
	fp = NULL;
}

void read_file ()
{
	FILE *fp = fopen("z.txt", "r");
	char buf[1024];
	int a[100];
	int i = 0;
	while(1)
	{
		fgets(buf, sizeof(buf)-1,fp);
		//when meet '\n' EOF or error, finsh fegets, that why need fgets so many times!
		if( feof(fp) )  break;
		int num;
		sscanf(buf, "%d\n", &num);
		// why `\n`? string in buf has `\n`
		a[i] = num;
		i++;
	}
	int n = i;
	for(i = 0; i< n; i++)	
	{
		printf("%d\n",a[i]);	
	}
}


int main ( int argc, char *argv[] )
{

	write_file();
	read_file();
	return 0;
}
