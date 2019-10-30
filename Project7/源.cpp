#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	double* ptd;
	int max;
	int number;
	int i = 0;

	puts("What is the maximum number of type double entries?");
	if (scanf_s("%d", &max) != 1)                                         //������󣬳�������˳�
	{
		puts("Number not corretly entered -- bey.");
		exit(EXIT_FAILURE);                              
	}
	ptd = (double*)malloc(max * sizeof(double));          /*���Ʊ䳤���飬��֧��C99��׼����ʹ������������ص�ַǿ��ת��Ϊdouble���͵�ַ��malloc���������ڴ�ɹ�ʱ���ط����ڴ���׵�ַ
														  ʧ��ʱ���ؿյ�ַNULL*/
	if (ptd == NULL)                                             //�ڴ����ʧ�ܣ������˳�
	{
		puts("Memory allocation failed.Goodbye.");
		exit(EXIT_FAILURE);                             
	}
	puts("Enter the values (q to quit):");
	while (i < max && scanf_s("%lf", &ptd[i]) == 1)
		i++;
	printf("Here are your %d enteries:\n", number = i);
	for (i = 0; i < number; i++)
	{
		printf("%7.2f ", ptd[i]);
		if (i % 7 == 6)
			putchar('\n');
	}
	if (i % 7 != 0)
		putchar('\n');
	puts("Done.");
	free(ptd);//free()������malloc�������صĲ����ͷ��ڴ�

	return 0;
}