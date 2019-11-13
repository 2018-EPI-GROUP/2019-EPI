#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define BUFSIZE 4096
#define SLEN 81
void append(FILE* source, FILE* dest);
char* s_gets(char* st, int n);

int main(int argc, char* argv[])
{
	FILE* fa, * fs;
	int files = 0;
	int ch;
	errno_t err;
	int i;
	if (argc < 3)
	{
		fprintf(stderr, "²ÎÊý´íÎó");
		exit(EXIT_FAILURE);
	}
	if ((err = fopen_s(&fa, argv[1], "a+")) != 0)
	{
		fprintf(stderr, "Can't open %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	if (setvbuf(fa, NULL, _IOFBF, BUFSIZE) != 0)
	{
		fputs("Can't create output buffer\n", stderr);
		exit(EXIT_FAILURE);
	}
	for (i = 2; i < argc; i++)
	{
		if (strcmp(argv[1], argv[i]) == 0)
			fputs("Can't append file to itself\n", stderr);
		else if ((err = fopen_s(&fs, argv[i], "r")) != 0)
			fprintf(stderr, "Can't open %s\n", argv[i]);
		else
		{
			if (setvbuf(fs, NULL, _IOFBF, BUFSIZE) != 0)
			{
				fputs("Can't create input buffer\n", stderr);
				continue;
			}
			append(fs, fa);
			if (ferror(fs) != 0)
				fprintf(stderr, "Error in reading file %s.\n", argv[i]);
			if (ferror(fa) != 0)
				fprintf(stderr, "Error in reading file %s.\n", argv[1]);

			fclose(fs);
			files++;
			printf("File %s appended.\n", argv[i]);
		}
	}
	printf("Done appending. %d files appended.\n", files);
	rewind(fa);
	printf("%s contents:\n", argv[1]);
	while ((ch = getc(fa)) != EOF)
		putchar(ch);
	puts("Done displaying.");
	fclose(fa);

	return 0;
}
void append(FILE* source, FILE* dest)
{
	size_t bytes;
	static char temp[BUFSIZE];
	while ((bytes = fread(temp, sizeof(char), BUFSIZE, source)) > 0)
		fwrite(temp, sizeof(char), bytes, dest);
}
char* s_gets(char* st, int n)
{
	char* ret_val;
	char* find;

	ret_val = fgets(st, n, stdin);
	if (ret_val)
	{
		find = strchr(st, '\n');
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;
	}

	return ret_val;
}