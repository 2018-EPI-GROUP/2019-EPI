#include <stdio.h>
int main (void)
{
	char x='A';
	int i,j;
	for(j=1;j<=6;j++)
	{
	for(i=1;i<=j;i++)
	{
	printf("%c",x);
	x++;
	}
	printf("\n");
	}
	return 0;
}
