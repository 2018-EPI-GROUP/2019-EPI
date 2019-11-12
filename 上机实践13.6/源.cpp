#include<stdio.h>
#include<stdlib.h>
#define ARSIZE 1000

int main(void)
{
	double numbers[ARSIZE];
	double value;
	const char* file = "numbers.dat";
	int i;
	long pos;
	FILE* iofile;
	errno_t err;

	for (i = 0; i < ARSIZE; i++)
		numbers[i] = 100.0 * i + 1.0 / (double)(i + 1);
	if ((err = fopen_s(&iofile, file, "wb")) != 0)
	{
		fprintf(stderr, "Couble not open %s for output.\n", file);
		exit(EXIT_FAILURE);
	}
	fwrite(numbers, sizeof(double), ARSIZE, iofile);
	fclose(iofile);
	if ((err = fopen_s(&iofile, file, "rb")) != 0)
	{
		fprintf(stderr, "Could not open %s for random access.\n", file);
		exit(EXIT_FAILURE);
	}
	printf("Enter an index in the range 0-%d.\n", ARSIZE-1);
	while (scanf_s("%d", &i) == 1 && i >= 0 && i < ARSIZE)
	{
		pos = (long)i * sizeof(double);
		fseek(iofile, pos, SEEK_SET);
		fread(&value, sizeof(double), 1, iofile);
		printf("The value there is %f.\n", value);
		printf("Next index (out of range to quit):\n");
	}
	fclose(iofile);
	puts("Bey!");

	return 0;
}