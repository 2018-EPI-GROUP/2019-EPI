#include<stdio.h>
#include<stdlib.h>

int main(int argc,char*argv[])
{
	FILE* fp, * ft;
	errno_t err;
	int ch;

	if (argc != 3)
	{
		printf("文件参数不对！");
		exit(EXIT_FAILURE);
	}
	if ((err = fopen_s(&fp, argv[1], "rb")) != 0)
	{
		fprintf(stderr, "文件%s打开失败\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	if ((err = fopen_s(&ft, argv[2],"wb")) != 0)
	{
		fprintf(stderr, "文件%s打开失败\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while ((ch = getc(fp)) != EOF)
	{
		putc(ch, ft);
	}
	fclose(fp);
	fclose(ft);
	fprintf(stdout, "成功将%s拷贝到%s中", argv[1], argv[2]);

	return 0;
}