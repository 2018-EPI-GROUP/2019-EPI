#include <stdio.h>
int main (void)
{
	char ch[26];
	int i,j;
	for(i=0;i<=25;i++)
	{
	ch[i]='a'+i;
	}
	for(j=0;j<=25;j++)
	printf("%c\n",ch[j]);
	return 0;
}
