#include<stdio.h>
#include<stdlib.h>
#define SIZE 21
int main(void)
{
	FILE* fp;
	char name[SIZE];
	errno_t err;
	long  count;
	int ch;

	printf("请输入文件名:");
	scanf_s("%s", name, SIZE);
	if ((err = fopen_s(&fp, name, "r")) != 0)
	{
		fprintf(stderr, "文件%s打开失败！", name);
		exit(EXIT_FAILURE);
	}
	printf("请输入文件位置:");
	while (scanf_s("%ld", &count) == 1 && count >= 0)
	{
		fseek(fp, count, SEEK_SET);
		while ((ch = getc(fp)) != EOF && ch != '\n')
			putchar(ch);
		printf("\n输入文件位置(输入负数或字母结束):");
	}
	fclose(fp);
	printf("Done!");

	return 0;
}