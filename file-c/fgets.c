#include<stdio.h>
#include<string.h>

int calc(int a, int b, char ch)
{
	switch(ch)
	{
		case '+':
	        	return a+b; 
			
		case '-':
	        	return a-b; 

		case '*':
	        	return a*b; 
				
		case '/':
	        	return a/b; 

		default: 
			return 0;
	}
	return 0;
}

void write_file ()
{
	FILE *fp = fopen("1.txt", "w");
	fputs("10+10=\n",fp);
	fputs("10-10=\n",fp);
	fputs("10*10=\n",fp);
	fputs("10/10=\n",fp);
	fputs("10+5=\n",fp);
	fputs("10-5=\n",fp);
	fputs("10*3=\n",fp);
	fputs("10/2=\n",fp);

	fclose(fp);
}

void read_file ()
{
	char temp[1024];
	FILE *fp = fopen("1.txt", "r");
	char buf[1024];
	while(1)
	{
		memset( buf, 0, sizeof(buf) );
		fgets(buf, sizeof(buf), fp);
		if(strlen(buf) > 0)
		{
			int a,b;
			char ch;
			sscanf(buf, "%d%c%d=\n", &a, &ch, &b);
			sprintf(buf, "%d %c %d = %d\n", a, ch, b, calc(a,b,ch) );
			printf("%s",buf);
			strcat(temp,buf);
		}
		if(feof(fp))
			break;
	}
	fclose(fp);

	fp = fopen("1.txt", "w");
	fputs(temp,fp);
	fclose(fp);
}

int main (int argc, char *argv[])
{
	write_file();
	read_file();
	return 0;
}

