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

	printf("�������ļ���:");
	scanf_s("%s", name, SIZE);
	if ((err = fopen_s(&fp, name, "r")) != 0)
	{
		fprintf(stderr, "�ļ�%s��ʧ�ܣ�", name);
		exit(EXIT_FAILURE);
	}
	printf("�������ļ�λ��:");
	while (scanf_s("%ld", &count) == 1 && count >= 0)
	{
		fseek(fp, count, SEEK_SET);
		while ((ch = getc(fp)) != EOF && ch != '\n')
			putchar(ch);
		printf("\n�����ļ�λ��(���븺������ĸ����):");
	}
	fclose(fp);
	printf("Done!");

	return 0;
}