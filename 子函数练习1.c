#include<stdio.h>
void  ShowMember(int member);
int main()
{
	int n[10];
	int i;
	for(i=0;i<10;i++)
	{
		n[i]=i;
	}
	for(i=0;i<10;i++)
	{
		ShowMember(n[i]);
	}
	return 0;
}
void ShowMember(int member)
{
	printf("Show the member is %d\n",member);
}
