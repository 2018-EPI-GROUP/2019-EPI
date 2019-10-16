#include<stdio.h>
main()
{
	int i=1,t=0,n;
	double aver;
	printf("请输入第一个学生成绩\n");
	scanf("%d",&n);
	while(n>0)
	{
		if(n<0)
		break;
		if(n<=60)
		printf("%d",n);
		t+=n;
		i+=1;
	}
	aver=t/i;
	printf("平均成绩为%f",aver);
}
