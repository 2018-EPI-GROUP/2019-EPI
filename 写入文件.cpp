#include<stdio.h>
int main()
{
	FILE *p;
	char str[50];
	p=fopen("D:\\1.txt","w");
	printf("������д�������\n");
	gets(str);
	fputs(str,p);
	fclose(p);
	return 0;
 } 
