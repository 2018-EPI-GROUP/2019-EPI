#include<stdio.h>
#include<stdlib.h>
#include<io.h>
main()
{
	FILE *fp;
    char filename[100];
    int fno,fsize;
    printf("请输入要打开的文件路径\n");
    gets(filename);
    fp=fopen("filename","r");
    if(fp==NULL)
    {
    	printf("打开文件失败\n");
    	exit(1);
	}
	fno=fileno(fp);
	fsize=filelength(fno);
	printf("文件大小%d bytes\n",fsize);
	fclose(fp);
}

