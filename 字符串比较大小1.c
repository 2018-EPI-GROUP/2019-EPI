#include<stdio.h>
void s(char *b[],int c,char *d);


int main()
{
	int n,
	    i;
	char ch;
	scanf("%d\n",&n);
	char a[n][100];
	for(i=0;i<n;i++)
	{
		scanf("%s",&a[i]);
	}
	s(a,n,&ch);
	printf("Min is %c",ch);
	return 0;
} 
void s(char *b[][100],int c,char *d)
{
	int i;
	char e;
	for(i=0;i<c-1;i++)
	{
		if(*b[i]<*b[i+1])
		e=*b[i];
		else
		e=*b[i+1];
	}
}
