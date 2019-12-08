#include<stdio.h>
#include<malloc.h>
struct li
{
	char num[10];
	char name[10];
	int score;
	struct li *next;
};
struct li *creat()
{
	struct li *head,*p1,*p2;
	head=p2=(struct li *)malloc(sizeof(struct li));
	printf("请输入学号 姓名 分数\n");
	p1=(struct li *)malloc(sizeof(struct li));
	scanf("%s%s%d",p1->num,p1->name,&p1->score);
	while(p1->num!=0)
	{
		p2->next=p1;
		p2=p1;
		p1=(struct li *)malloc(sizeof(struct li));
		scanf("%s%s%d",p1->num,p1->name,&p1->score);
	}
	p2->next=NULL;
	free(p1);
	return head;
}
void list(struct li *p)
{
	p=p->next;
	while(p!=NULL)
	{
		printf("%s%s%d",p->num,p->name,p->score);
		p=p->next;
	}
}
int main()
{
	struct li *p;
	p=creat();
	list(p);
}

