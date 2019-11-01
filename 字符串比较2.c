#include<stdio.h>
#include<string.h>
main() 
{
	int n,
	    i;
	char a[100];
	scanf("%d",&n);
	char ch[n][100];
	for(i=0;i<n;i++)
	gets(ch[i]);
	for(i=0;i<n-1;i++)
	{
		
		if(strcmp(ch[i],ch[i+1])>0)
		a[100]=ch[i+1];
		else if(strcmp(ch[i],ch[i+1])<0)
		a[100]=ch[i];
		else
		a[100]=ch[i];
		
	}
	printf("Min is: %s",a[100]);
}
