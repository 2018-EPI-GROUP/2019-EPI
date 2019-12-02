#include<stdio.h>

void remove_space(char *str1)
{
	char str2[100]={0};
	int i=0;
	int j=0;
	while (str1[i]!='\0')
	{
		if (str1[i]!=' ')
		{
			str2[j]=str1[i];
			j++;
		}
		i++;
	}
	i=0;
	while (str2[i]!='\0')
	{
		str1[i]=str2[i];
		i++;
	}
	str1[i]='\0';
}

int main(void)
{
	char str1[100]="   he  l l    o, w   o r  l d!";
	remove_space(str1);
	printf("%s",str1);
	return 0;
}