#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	FILE* fp;
	char file_n[20];
	errno_t err;
	char files[300];
	int ch;
	int count = 0;
	printf("�������ļ�����");
	scanf_s("%s", file_n,20);
	if ((err = fopen_s(&fp, file_n, "w")) != 0)
	{
		fprintf(stderr, "���ļ�%sʧ��\n", file_n);
		exit(EXIT_FAILURE);
	}

	printf("�����ļ����ݣ�");
	getchar();
	fgets(files, 300, stdin);
	fputs(files,fp);
	fclose(fp);
	if ((err = fopen_s(&fp, file_n, "r")) != 0)
	{
		fprintf(stderr, "���ļ�%sʧ��\n", file_n);
		exit(EXIT_FAILURE);
	}
	while ((ch = getc(fp)) != EOF)
	{
		putc(ch, stdout);
		count++;
	}
	fclose(fp);
	printf("File %s has %lu characters\n", file_n, count);

	return 0;

}