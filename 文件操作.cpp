#include<stdio.h>
int main()
{
	FILE *fp;
	char buf[100];
	fp=fopen("D:\\1.txt","r");
	if(fp==NULL)  printf("���ļ�ʧ��\n");
	fgets(buf,50,fp);
	printf("%s",buf); 
	fclose(fp);
	return 0;
 } 
