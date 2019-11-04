#include<stdio.h>
int main(void)
{
	char s1[8];
	char s2[8];
	scanf("%7s",&s1);  //%7s表示每次SCANF读入的单词在多于七个的时候只读前七个 
	scanf("%7s",&s2);  //每次空格、TAB或回车就计为一个单词的结束 
	printf("#%s#  #%s#\n",s1,s2);
	return 0;
} 
