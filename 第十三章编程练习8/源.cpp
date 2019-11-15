#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[])
{
	int n;
	int ch;
	char ch_a;
	int count ;
	errno_t err;
	char name[20];
	FILE* fp;

	if (argc < 3&&argc!=1)
	{
		ch_a = *argv[1];
		printf("请输入文件名(用空格隔开)(输入q结束）:");
		while ((scanf_s("%s", name, 20)))
		{
			if (name[0] == 'q')
				if(name[1]=='\0')
					exit(0);

			count = 0;

			if ((err = fopen_s(&fp, name, "r")) != 0)
			{
				fprintf(stderr, "文件%s打开失败\n", name);
				continue;
			}
			while ((ch = getc(fp)) != EOF)
			{
				if (ch == ch_a)
				{
					count++;
				}
			}
			printf("%s中出现%c的次数为%d\n", name, ch_a, count);
			fclose(fp);
		}
	}
	else
	{
		ch_a = *argv[1];
		for (n = 2; n < argc; n++)
		{
			count = 0;

			if ((err = fopen_s(&fp, argv[n], "r")) != 0)
			{
				fprintf(stderr, "文件%s打开失败！\n", argv[n]);
				continue;
			}
			while ((ch = getc(fp)) != EOF)
			{
				if (ch == ch_a)
				{
					count++;
				}
			}
			printf("%s中出现%c的次数为%d\n", argv[n],ch_a,count);
			fclose(fp);
		}
	}

	return 0;
}