#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define LEN 20

char* s_gets(char* st, int n);

int main(void)
{
	FILE* file_1, * file_2;
	char* i;
	char name[LEN];
	char file[256];
	int ch;
	errno_t err;
	int n = 1;
	printf("请输入第一个文件名：");
	s_gets(name, LEN);
	if ((err = fopen_s(&file_1, name, "r")) != 0)
	{
		fprintf(stderr, "文件%s打开失败!", name);
		exit(EXIT_FAILURE);
	}
	printf("请输入第二个文件名：");
	s_gets(name, LEN);
	if ((err = fopen_s(&file_2, name, "r")) != 0)
	{
		fprintf(stderr, "文件%s打开失败!", name);
		exit(EXIT_FAILURE);
	}
	i = fgets(file, 256, file_1);
	while (i != NULL)
	{
		if (n == 1)
		{
			fputs(file, stdout);
			fgets(file, 256, file_2);
		}
		else if (n % 2 == 0)
		{
			fputs(file, stdout);
			i = fgets(file, 256, file_1);
			
		}
		else
		{
			fputs(file, stdout);
			i = fgets(file, 256, file_2);
		}
		n++;
	}
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