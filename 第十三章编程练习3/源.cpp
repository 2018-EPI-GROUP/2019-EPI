#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main(void)
{
	int ch;
	FILE* fp, * ft;
	errno_t err;
	char file_n[50];
	char file_m[50];

	printf("请输入原始文件名：");
	scanf_s("%s", file_n,50);
	getchar();
	if ((err = fopen_s(&fp, file_n, "r")) != 0)
	{
		fprintf(stderr, "文件%s打开失败", file_n);
		exit(EXIT_FAILURE);
	}
	printf("请输入目标文件名:");
	scanf_s("%s", file_m,50);
	getchar();
	if ((err = fopen_s(&ft, file_m, "w")) != 0)
	{
		fprintf(stderr, "\n文件%s打开失败", file_m);
		exit(EXIT_FAILURE);
	}
	while ((ch = getc(fp)) != EOF)
	{
		putc(ch, ft);
	}
	printf("文件拷贝成功！");
	fclose(fp);
	fclose(ft);

	return 0;
}