#include<stdio.h>
main()
{
	int i=1,aver,n,t=0;
	printf("请输入第一个学生成绩");
	scanf("%d",&n);
	while(n>0)
	{
		if(n<=60)
		printf("该学生成绩小于60分为%4d\n",n);
		t+=n;
		i+=1;
		printf("请输入学生成绩");
		scanf("%d",&n); 
	 } 
	 aver=t/i;
	 printf("学生的平均成绩为%d",aver);
 } 
