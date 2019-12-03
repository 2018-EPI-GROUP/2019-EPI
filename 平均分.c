#include<stdio.h>
struct student
{
	char num[10];
	char nam[10];
	int score;
}s[100];
int main()
{
	int n,
	    i;
	double average,
	       sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s%s%d",s[i].num,s[i].nam,&s[i].score);
	}
    for(i=0;i<n;i++)
    {
    	sum+=s[i].score;
	}
	average=sum/n;
	printf("%.2lf\n",average);
	for(i=0;i<n;i++)
	{
		if(s[i].score<average)
		printf("%s %s\n",s[i].nam,s[i].num);
	}
	return 0;
}
