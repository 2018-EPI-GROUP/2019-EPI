#include<stdio.h>
#include<string.h>
char* s_gets(char* st, int n);
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 100
struct book {
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
};
void rank_1(struct book *n, int m);//利用冒泡排序。
void rank_2(struct book n[], int m);
void display(struct book* n, int m);

int main(void)
{
	struct book library[MAXBKS];
	int count = 0;
	

	printf("Please enter the book title.\n");
	printf("Press [enter] at the start of a line to stop.\n");
	while (count < MAXBKS && s_gets(library[count].title, MAXTITL) != NULL
		&& library[count].title[0] != '\0')
	{
		printf("Now enter the author.\n");
		s_gets(library[count].author, MAXAUTL);
		printf("now enter the value.\n");
		scanf_s("%f", &library[count++].value);
		while (getchar() != '\n')
			continue;
		if (count < MAXBKS)
			printf("Enter the next title.\n");
	}
	if (count > 0)
	{
		rank_1(library, count);
		printf("按照名称首字母排序\n");
		display(library, count);
		printf("按照价格排序\n");
		rank_2(library, count);
		display(library, count);
	}
	else
		printf("No books? Too bad.\n");

	return 0;
}

void rank_1(struct book* n, int m)
{
	int i;
	int count;
	struct book c;
	int x = m;

	do
	{
		count = 0;
		for (i=0; i < m-1; i++)
		{
			if (n[i].title[0] < n[i + 1].title[0]);
			else
			{
				c = n[i];
				n[i] = n[i + 1];
				n[i + 1] = c;
				count++;
				x = i + 1;
			}
		}
		m = x;
		
	} while (count);
}
void rank_2(struct book n[], int m)
{
	int i;
	int count;
	struct book c;
	int x = m;

	do {
		count = 0;
		for (i = 0; i < m-1; i++)
		{
			if (n[i].value < n[i + 1].value);
			else
			{
				c = n[i];
				n[i] = n[i + 1];
				n[i + 1] = c;
				count++;
				x = i + 1;
			}
		}
		m = x;
	} while (count);
}
void display(struct book* n, int m)
{
	int index;
	for (index = 0; index < m; index++)
	{
		printf("%s by %s: $%.2f\n", n[index].title, n[index].author, n[index].value);
	}
}
char* s_gets(char* st, int n)
{
	char* ret_val;
	char* find;

	ret_val = fgets(st, n, stdin);
	if (ret_val)
	{
		find = strchr(st, '\n');
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return ret_val;
}