#include<stdio.h>
#include<string.h>
struct a
{
	char num[10];
	char name[20];
	int age;
	int s[3];
	float aver;
 };
int main()
{
	struct a b,*p=&b;
	printf("请输入学生姓名\n");
	scanf("%s",p->name);
	printf("请输入学号，年龄，三门课成绩\n");
	scanf("%s%d%d%d%d",p->num,&p->age,&p->s[0],&p->s[1],&p->s[2]);
	p->aver=(p->s[0]+p->s[1]+p->s[2])/3;
	printf("%s    %s   %d   %d   %d  %d   %f",p->num,p->name,p->age,p->s[0],p->s[1],p->s[2],p->aver); 
}

