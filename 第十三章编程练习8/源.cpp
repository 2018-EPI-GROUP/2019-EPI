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
		printf("�������ļ���(�ÿո����)(����q������:");
		while ((scanf_s("%s", name, 20)))
		{
			if (name[0] == 'q')
				if(name[1]=='\0')
					exit(0);

			count = 0;

			if ((err = fopen_s(&fp, name, "r")) != 0)
			{
				fprintf(stderr, "�ļ�%s��ʧ��\n", name);
				continue;
			}
			while ((ch = getc(fp)) != EOF)
			{
				if (ch == ch_a)
				{
					count++;
				}
			}
			printf("%s�г���%c�Ĵ���Ϊ%d\n", name, ch_a, count);
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
				fprintf(stderr, "�ļ�%s��ʧ�ܣ�\n", argv[n]);
				continue;
			}
			while ((ch = getc(fp)) != EOF)
			{
				if (ch == ch_a)
				{
					count++;
				}
			}
			printf("%s�г���%c�Ĵ���Ϊ%d\n", argv[n],ch_a,count);
			fclose(fp);
		}
	}

	return 0;
}