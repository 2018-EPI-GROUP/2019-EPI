#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define LEN 40
char* s_gets(char* st, int n);

int main(void)
{
	FILE* in, * out;
	int ch;
	char name[LEN];
	char name_l[LEN];
	int count = 0;
	errno_t err;

	printf("输入原始文件名：");
	s_gets(name, LEN);
	if ((err = fopen_s(&in, name, "r")) != 0)
	{
		fprintf(stderr, "I couldn't open the file %s!", name);
		exit(EXIT_FAILURE);
	}
	printf("请输入要创建的.red文件名：");
	s_gets(name_l, LEN);
	strcat_s(name_l, ".red");
	if ((err = fopen_s(&out, name_l, "w")) != 0)
	{
		fprintf(stderr, "Can't create output file.\n");
		exit(EXIT_FAILURE);
	}
	while ((ch = getc(in)) != EOF)
		if (count++ % 3 == 0)
			putc(ch, out);
	if (fclose(in) != 0 || fclose(out) != 0)
		fprintf(stderr, "Error in closing files\n");
	printf("%s创建成功！！", name_l);

	return 0;

	
}
char* s_gets(char* st, int n)
{
	char* ret_val;
	char* find;
	ret_val = fgets(st, n, stdin);
	if (ret_val)
	{
		find = strchr(st, '\n');
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return ret_val;
}