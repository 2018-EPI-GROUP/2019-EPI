#include<stdio.h>
int main()
{
	FILE *fp;
	char buf[100];
	fp=fopen("D:\\1.txt","r");
	if(fp==NULL)  printf("打开文件失败\n");
	fgets(buf,50,fp);
	printf("%s",buf); 
	fclose(fp);
	return 0;
 } 
