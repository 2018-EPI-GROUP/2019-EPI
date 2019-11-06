#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void)
{
	int n, i, s;
	char** pt;
	char word[50];
	printf("How many words do you wish to enter? ");
	scanf_s("%d", &n);
	pt = (char**)malloc(n * sizeof(char*));
	printf("Enter %d words now:\n",n);
	for ( i = 0; i < n; i++)
	{
		scanf_s("%s", word, 50);
		s = strlen(word) + 1;
		pt[i] = (char*)malloc(s*sizeof(char));
		strcpy_s(pt[i], s, word);                    //稍微相信一点自己上一章学习的东西呀，早都解决了
		
	}
	for (i = 0; i < n; i++)
	{
		puts(pt[i]);
		free(pt[i]);
	}
	free(pt);
	return 0;
}
