#include<stdio.h>
#include<stdlib.h>
#include<io.h>
main()
{
	FILE *fp;
    char filename[100];
    int fno,fsize;
    printf("������Ҫ�򿪵��ļ�·��\n");
    gets(filename);
    fp=fopen("filename","r");
    if(fp==NULL)
    {
    	printf("���ļ�ʧ��\n");
    	exit(1);
	}
	fno=fileno(fp);
	fsize=filelength(fno);
	printf("�ļ���С%d bytes\n",fsize);
	fclose(fp);
}

