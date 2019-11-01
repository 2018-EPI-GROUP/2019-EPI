#include<stdio.h>
#include<string.h>
void main()
{
    char str1[100],str2[100];
    printf("本程序用于判断输入的两个字符串的大小。两字符串用回车隔开。\n");
    printf("输入第一个字符串：");
    gets(str1);
    printf("输入第二个字符串：");
    gets(str2);
    if(strcmp(str1,str2)==0)
        printf("字串“%s” = 字串“%s”。\n",str1,str2);
    if(strcmp(str1,str2)<0)
        printf("字串“%s” < 字串“%s”。\n",str1,str2);
    if(strcmp(str1,str2)>0)
        printf("字串“%s” > 字串“%s”。\n",str1,str2);
}

