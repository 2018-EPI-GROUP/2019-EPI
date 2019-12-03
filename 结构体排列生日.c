#include<stdio.h>
#include<string.h>
struct student
{
	char num[30];
	char birthday[30];
	char tele[30];
}t,s[10];
int main()
{
	int n,
	    i,
	    j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s%s%s",s[i].num,s[i].birthday,s[i].tele);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(strcmp(s[j+1].birthday,s[j].birthday)<0)
			{
				t=s[j];
				s[j]=s[j+1];
				s[j+1]=t;
			}
		}
	
	}
	for(i=0;i<n;i++)
	{
		printf("%s %s %s",s[i].num,s[i].birthday,s[i].tele);
	    if(i!=n-1)
	    printf("\n");
	}		
	return 0;
}
