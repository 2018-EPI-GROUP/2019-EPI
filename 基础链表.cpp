#include<stdio.h>
#include<stdlib.h>
#define PT "%s  %s  %d\n", p->num,p->name,p->chengji
#define N sizeof(struct li)
struct li
{
	char num;
	char name[10];
	int chengji;
	struct li *next;
};
void printf(struct li *p)
{
	p=p->next;
	while(p!=NULL)
	{
		printf(PT);
		p=p->next;
	}
}
struct li *creat(void)
{
	struct li *p1,*p2,*head;
	head=p2=(struct li *)malloc(N);
	printf("请输入学号，姓名，成绩，输入0结束\n");
	p1=(struct li *)malloc(N);
	scanf("%s%s%d",p1->num,p1->name,&p1->chengji);
	while(p1->num!=0)
	{
		p2->next=p1;
		p2=p1;
		p1=(struct li *)malloc(N);
		scanf("%s%s%d",p1->num,p1->name,&p1->chengji);
	}
	p2->next=NULL;
	free(p1);
	return head;
}
main()
{
	struct li *head;
	head=creat();
	printf(head);
} 
