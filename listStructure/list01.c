#include<stdio.h>
#include<stdlib.h>

typedef struct Students
{
	int score;
	char name[11];
	int num;
	struct Students *next;

}Student;

void assign (Student *p)
{
	printf("please assign value to the structure\n");
	printf("score\tname\tnum\n");
	scanf( "%d\t%s\t%d", &(p->score), p->name, &(p->num) );

}

Student *creat (void)
{
	Student *p0,*p1,*p2;	
	p0 = (Student *)malloc( sizeof(Student) );
	p1 = p0;
	p2 = (Student *)malloc( sizeof(Student) );
	p1->next = p2;
	assign(p2);
	while(1)
	{
		if(p2->score == 0)	
		{
			p1->next = NULL;
			free(p2);
			printf("finsh creat!\n");	
			break;	
		}
		
		p1 = p1->next;
		p2 = (Student *)malloc( sizeof(Student) );
		p1->next = p2;	
		assign(p2);	
		
	}
	return p0;
}

int main(void)
{
	Student *p;
	p = creat();
	int a = (p->next)->score;
	printf("a=%d\n",a);
	return 0;

}
