/* Find the specified node */
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

char *find(Student *p, int n)
{
	p = p->next;
	int num = 1;
	while(1)
	{
		if(num == n)	
		{
			return p->name;	
		}
		num++;
		p = p->next;
	}
	return NULL;
}


void find_best_stu(Student *p)
{
	int a[30];		
	Student *p0 = p;
	p = p->next;
	int n = 0;
	while(1)
	{
		a[n] = p->score;			
		n++;
		if(p->next == NULL)
		break;
		p = p->next;
	}
	printf("There are %d people here\n",n);

	
/*	grade list
 *
	int i = 0;
	for(i = 0; i < n-1; i++)
	{
		int j = 0;
		for(j = 0; j<n-1-i; j++)	
		{
			if(a[j] > a[j+1])
			{
				int tmp;	
				tmp = a[j];	
				a[j] = a[j+1];
				a[j+1] = tmp;
			}			

		}
	}
	printf("The highest score : %d\n", a[n-1]);
 *
*/

//	only find highest one
	int the_highest = 0;
	int i = 0;	
	for(i = 0; i < n; i++)
	{
		int k = 0;
		int num = 0;
		for(k = 0; k < n; k++)	
		{
			if(a[i] >= a[k])	
			{
				num++;												
			}											
		}                                                                                           
		if(num == n)										          			
		{
			the_highest = i+1;	
			break;
		}
	}
	printf("Student number of %d is the best one\n", the_highest);

/*	int i = 0;
	for(i = 0; i <4; i++)
	{
		printf("%d\n",a[n]);	
	}
*/
	char *best = find(p0,the_highest);
	if(best == NULL)
	printf("I can't find !\n");
	printf("The best one is %s\n", best);
}

int main(void)
{
	Student *p;
	p = creat();
	find_best_stu(p);	
	return 0;

}
