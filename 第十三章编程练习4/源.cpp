#include<stdio.h>
#include<stdlib.h>
int main(int argc, char* argv[])
{
	if (argc<2)
	{
		fprintf(stderr, "没有参数");
		exit(EXIT_FAILURE);
	}
	for (int i = 1; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return 0;
}