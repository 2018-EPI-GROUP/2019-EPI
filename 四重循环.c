#include <stdio.h>
int main (void)
{
	char ch,x;
	char space=' ';
	int i,j,k,l,n;
	char a='A';
	printf("please entert the letter:\n");
	scanf("%c",&ch);
	n=ch-64;
	for(i=0;i<n;i++)
	{
		for(j=0;j<=n-i;j++)
		{
		putchar(space);
		}
		a='A';
		for(k=0;k<=i;k++)
		{
		printf("%c",a);
		a++;
		}
		x=ch+i-n;
		for(l=i;l>0;l--)
		{
		printf("%c",x);
		x--;
		}
		printf("\n");
	}
	return 0;
}
