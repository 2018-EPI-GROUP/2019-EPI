#include<stdio.h>
#include<string.h>
#include<malloc.h>
struct student
{
	char name[10];
	struct student *next;
 } ;
 struct student *creat()
 {
 	struct student *head,*p,*next;
 	char str[10];
 	char flag;
 	printf("请输入姓名\n");
 	scanf("%s",str);
 	getchar();
 	head=(struct student *)malloc(sizeof(struct student));
 	strcpy(head->name,str);
 	p=head;
 	printf("是否继续输入\n");
 	scanf("%c",&flag);
 	while(flag!='n')
 	{
 	printf("请输入姓名\n");
 	scanf("%s",str);
 	getchar();
 	next=(struct student *)malloc(sizeof(struct student));
 	strcpy(next->name,str);
 	p->next=next;
 	p=next;
 	printf("是否继续输入\n");
 	scanf("%c",&flag);
	 }
	 p->next=NULL;
	 return(head);
 }
 void list(struct student *p)
 {
 	while(1)
 	{
 	 printf("%s\n",p->name);
 	 if(p->next!=NULL)
 	 p=p->next;
 	 else  break;
	 }
 }
 main()
 {
 	struct student *p;
 	p=creat();
 	list(p);
 }
