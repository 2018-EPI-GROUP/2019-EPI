#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 41
int main(void)
{
	FILE* fp;
	char words[MAX];
	errno_t err;
	int  count=1;

	if ((err = fopen_s(&fp, "words.txt", "a+"))!=0)
	{
		fprintf(stderr,"Can't open \"wordy.txt\" file.");
		exit(EXIT_FAILURE);
	}
	while (fgets(words, MAX, fp) != NULL)
		count++;
	

	puts("Enter words to add to the file; press the #");
	puts("key at the begging of a line to terminate.");
	while ((fscanf_s(stdin, "%40s", words,41) == 1) && (words[0] != '#'))
	{
		fprintf(fp, " %s %d\n", words, count);
		count++;
	}
	puts("File countents:");
	rewind(fp);
	while (fgets(words, MAX, fp) != NULL)
		fputs(words,stdout);
	puts("Done!");
	if (fclose(fp) != 0)
		fprintf(stderr, "Error closing file\n");

	return 0;
}