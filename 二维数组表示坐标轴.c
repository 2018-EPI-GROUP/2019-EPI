#include <stdio.h>
void fence();
void coordinate(int x,int y);

int i,j;

int main()
{
	coordinate(10,12);
	printf("$$");
	fence();
		
	return 0;
}

void fence()
{
	int K = 10,L = 10;
	int i,j;
	for(i = 1 ; i <= L ; i++)
	{
		printf("#");
		
	}
	for(i = 1 ; i < K ; i++)	
	{
		if(i == 1)printf("\n");
		printf("#");
		for(j = 1 ; j <= K-2 ; j++)
		printf(" ");
		printf("#");
		printf("\n");
	}
	for(i = 1 ; i <= L ; i++)
	{
		printf("#");
		
	}
}

void coordinate(int x,int y)
{
	int i,j;
	for(j = 1 ; j <= y ; j++)
	{
		printf("\n");
	}
	for(i = 1 ; i <= x ; i++)
	{
		printf(" ");
	}
}

