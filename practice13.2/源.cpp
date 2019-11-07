#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define LEN 40

int main(int argc, char* argv[])
{
	FILE* in, * out;
	int ch;
	char name[LEN];
	int count = 0;
	errno_t err;

	if (argc < 2)
	{
		fprintf(stderr, "Usage: %s filename\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	err = fopen_s(&in, argv[1], "r");
	if (err)
	{
		fprintf_s(stderr, "I couldn't open the file \"%s\"\n",
			argv[1]);
		exit(EXIT_FAILURE);
	}
	printf("%s |\n",argv[2]);
	strncpy_s(name, argv[1], LEN - 5);
	name[LEN - 5] = '\0';
	strcat_s(name, ".red");
	err = fopen_s(&out, name, "w");
	if (err)
	{
		fprintf(stderr, "Can't create output file.\n");
		exit(3);
	}
	while ((ch = getc(in)) != EOF)
	{
		if (count++ % 3 == 0)
			putc(ch, out);
		printf("0\n");
	}
	if (fclose(in) != 0 || fclose(out) != 0)
		fprintf(stderr, "Error in closing files\n");

	return 0;
}