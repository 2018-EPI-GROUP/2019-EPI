#include<stdio.h>
int main(void)
{
	char s1[8];
	char s2[8];
	scanf("%7s",&s1);  //%7s��ʾÿ��SCANF����ĵ����ڶ����߸���ʱ��ֻ��ǰ�߸� 
	scanf("%7s",&s2);  //ÿ�οո�TAB��س��ͼ�Ϊһ�����ʵĽ��� 
	printf("#%s#  #%s#\n",s1,s2);
	return 0;
} 
