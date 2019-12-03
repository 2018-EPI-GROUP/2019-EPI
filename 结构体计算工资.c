#include<stdio.h>
struct pep
{
	char num[10];
	float m;
	float n;
	float x;
}s[100];
int main()
{
	int n,
	    i,
	    j;
	scanf("%d",&n);
	float a[n];
	for(i=0;i<n;i++)
	{
		scanf("%s %f %f %f",s[i].num,&s[i].m,&s[i].n,&s[i].x);
	}
	for(i=0;i<n;i++)
	{
		a[i]=s[i].m+s[i].n-s[i].x;
		
		
		printf("%f %f %f %f",s[i].m,s[i].n,s[i].x,a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%s %.2f",s[i].num,a[i]);
		if(i!=n-1)
		printf("\n");
	}
	return 0;
}
