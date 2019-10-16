#include"stdio.h"
main()
{
	int x;
	char dengji;
	printf("请输入学生成绩");
	scanf("%d",&x);
	if(x>=90&&x<=100)
	dengji='A';
	else if(x>=80&&x<90)
	dengji='B';
	else if(x>=70&&x<80)
	dengji='C';
	else if(x>=60&&x<70)
	dengji='D';
	else if(x<60)
	dengji='E';
	printf("%c",dengji);
	 
 } 
