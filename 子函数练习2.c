#include<stdio.h>
void ShowMember(int A[10])
{
	int a;
	for(a=0;a<10;a++)
	{
		printf("the member number is %d\n",A[a]);
	}
}
void  Evaluate(int A[10])
{
	int a;
	for(a=0;a<10;a++)
	{
		A[a]=a;
	}
}

int main()
{
	int n[10];
	Evaluate(n);
	ShowMember(n);
	return 0;
}

