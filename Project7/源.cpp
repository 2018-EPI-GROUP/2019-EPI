#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	double* ptd;
	int max;
	int number;
	int i = 0;

	puts("What is the maximum number of type double entries?");
	if (scanf_s("%d", &max) != 1)                                         //输入错误，程序结束退出
	{
		puts("Number not corretly entered -- bey.");
		exit(EXIT_FAILURE);                              
	}
	ptd = (double*)malloc(max * sizeof(double));          /*类似变长数组，不支持C99标准可以使用这个，将返回地址强制转换为double类型地址，malloc函数分配内存成功时返回分配内存的首地址
														  失败时返回空地址NULL*/
	if (ptd == NULL)                                             //内存分配失败，程序退出
	{
		puts("Memory allocation failed.Goodbye.");
		exit(EXIT_FAILURE);                             
	}
	puts("Enter the values (q to quit):");
	while (i < max && scanf_s("%lf", &ptd[i]) == 1)
		i++;
	printf("Here are your %d enteries:\n", number = i);
	for (i = 0; i < number; i++)
	{
		printf("%7.2f ", ptd[i]);
		if (i % 7 == 6)
			putchar('\n');
	}
	if (i % 7 != 0)
		putchar('\n');
	puts("Done.");
	free(ptd);//free()函数以malloc函数返回的参数释放内存

	return 0;
}