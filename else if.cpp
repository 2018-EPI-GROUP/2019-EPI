#include<stdio.h>
int main()
{
	int number;
	float cost;
	scanf("%d",&number) ;
	if(number>500) 
	cost=0.1; 
	else if(number>300) 
	cost=0.2;
	else if(number>100)
	cost=0.3;
	return  0;	
} 
