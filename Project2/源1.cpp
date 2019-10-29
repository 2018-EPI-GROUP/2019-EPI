#include<stdio.h>
#include<stdlib.h>
extern void srand1(unsigned int x);
extern int rand1(void);

int main(void)
{
	int count;
	unsigned seed;

	printf("Please enter your choice for seed.\n");
	while (scanf_s("%u", &seed) == 1)
	{
		srand1(seed);
		for (count = 1; count < 5; count++)
			printf("%d\n", rand1());
		printf("Please enter next seed (q to quit):\n");
	}
	printf("Done\n");

	return 0;
}

/*存储类型的应用，生成随机数*/