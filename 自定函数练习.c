#include<stdio.h>
void sum_10(int begin,int end); 
void sum_10(int begin,int end) 
{
	int sum;
	for(sum=0;begin<=end;begin++)
	{
		sum+=begin;
	}
	printf("%d\n",sum);
	
}
int main()
{
	sum_10(1,10);
	sum_10(20,30);
	sum_10(35,45);
	
	return 0;
}

