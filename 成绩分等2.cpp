#include<stdio.h>

int main() 
{
	int score;
	printf("ÊäÈë³É¼¨");
	scanf("%d",&score);
	if(score>=90&&score<=100)
	{
	printf("A");
	}
	if(score>=80&&score<=89)
    {
	printf("B");
    } 
	if(score>=70&&score<=79)
	{
	printf("C");
	}
	if(score>=60&&score<=69)
	{
	printf("D");
	}
	if(score<=59)
	{
	printf("E");
	}
}

