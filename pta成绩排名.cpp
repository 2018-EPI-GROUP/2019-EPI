#include<stdio.h>
struct xinxi
{
	char name[10];
	char num[10];
	int score;
}s[10000];
int main()
{
	int i,j,n,t;
	struct xinxi s[10000];
	printf("����������\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	   printf("������ѧ����Ϣ\n");
	   scanf("%s%s%d",s[i].name,s[i].num,&s[i].score);
	}
	for(i=0;i<n;i++)
	   for(j=0;j<n-i+1;j++)
	   	   if(s[j].score >s[j+1].score )
	   	   {
	   	   	t=s[j].score;
	   	   	s[j].score=s[j+1].score;
	   	   	s[j+1].score=t;
		   }
	printf("%s %s\n",s[0].name,s[0].num);
    printf("%s %s",s[n-1].name,s[n-1].num);
    return 0;
}
