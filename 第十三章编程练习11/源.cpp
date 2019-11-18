#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define LINE 255

int main(int argc, char* argv[])
{
	FILE* fp;
	errno_t err;
	char line[LINE+1];
	char* p;

	if (argc != 3)
	{
		fprintf(stderr, "参数数量错误");
		exit(EXIT_FAILURE);
	}
	if ((err = fopen_s(&fp, argv[2],"r")) != 0)
	{
		fprintf(stderr, "打开文件%s失败!", argv[2]);
		exit(EXIT_FAILURE);
	}
	while (fgets(line, LINE, fp) != NULL)
	{
		p = strstr(line, argv[1]);
		if (p != NULL)
			fputs(line, stdout);
	}
	fclose(fp);
	printf("\nDone!!");

	return 0;
}