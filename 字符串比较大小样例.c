#include<stdio.h>
#include<string.h>
void main()
{
    char str1[100],str2[100];
    printf("�����������ж�����������ַ����Ĵ�С�����ַ����ûس�������\n");
    printf("�����һ���ַ�����");
    gets(str1);
    printf("����ڶ����ַ�����");
    gets(str2);
    if(strcmp(str1,str2)==0)
        printf("�ִ���%s�� = �ִ���%s����\n",str1,str2);
    if(strcmp(str1,str2)<0)
        printf("�ִ���%s�� < �ִ���%s����\n",str1,str2);
    if(strcmp(str1,str2)>0)
        printf("�ִ���%s�� > �ִ���%s����\n",str1,str2);
}

