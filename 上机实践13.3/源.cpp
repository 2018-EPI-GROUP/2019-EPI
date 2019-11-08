//fprintf()ºÍfscanf()º¯Êý
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 41

int main(void)
{
	FILE* fp;
	char word[MAX];
	errno_t err;

	if ((err = fopen_s(&fp, "wordy", "a+")) != 0)
	{
		fprintf(stdout, "Can't open \"wordy\" file.\n");
		exit(EXIT_FAILURE);
	}

	puts("Enter words to add to the file;press the #");
	puts("key at the beginning og aline to terminate.");
	while ((fscanf_s(stdin, "%40s", word,MAX) == 1) && (word[0] != '#'))
		fprintf(fp, "%s\n", word);

	puts("File contents:");
	rewind(fp);
	while (fscanf_s(fp, "%s", word,MAX) == 1)
		puts(word);
	puts("Done!");
	if (fclose(fp) != 0)
		fprintf(stderr, "Error closing file\n");

	return 0;
}