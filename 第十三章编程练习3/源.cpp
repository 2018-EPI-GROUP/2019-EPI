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

	printf("������ԭʼ�ļ�����");
	scanf_s("%s", file_n,50);
	getchar();
	if ((err = fopen_s(&fp, file_n, "r")) != 0)
	{
		fprintf(stderr, "�ļ�%s��ʧ��", file_n);
		exit(EXIT_FAILURE);
	}
	printf("������Ŀ���ļ���:");
	scanf_s("%s", file_m,50);
	getchar();
	if ((err = fopen_s(&ft, file_m, "w")) != 0)
	{
		fprintf(stderr, "\n�ļ�%s��ʧ��", file_m);
		exit(EXIT_FAILURE);
	}
	while ((ch = getc(fp)) != EOF)
	{
		putc(ch, ft);
	}
	printf("�ļ������ɹ���");
	fclose(fp);
	fclose(ft);

	return 0;
}