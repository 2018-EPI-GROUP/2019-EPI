/* Decomposition prime factor */

#include <stdio.h>
int findMinOddNumber(int evenNum)
{
	if(evenNum%2!=0 || evenNum == 2) 
	{
		return evenNum;
	}
	else
	{
		return findMinOddNumber(evenNum/2);	
	}

}

void printfEvenNum(int evenNum)
{
	int i = 0;
	int MinOddNum = findMinOddNumber(evenNum);
	printf("%d=%d*", evenNum, MinOddNum);	
	while(MinOddNum != evenNum)
	{
		i++;		
		MinOddNum *= 2;	
	}
	int k = 0;
	for(k =0; k<i; k++)
	{
		if(k == i-1) 	
		printf("2");
		else
		{
			printf("2*");	
		
		}
	}
	printf("\n");
}
int main01(void){
	printfEvenNum(8);
}


int isPrime(int num)
{
	if(num%2 == 0 && num != 2) 
	return 0;
	if(num == 2 || num == 1)
	return 1;
	int i;
	for(i = 2; i<num; i++)
	{
		if(num%i == 0)	
		return 0;
	}
	return 1;
}
int main02(void)
{
	printf("%d\n", isPrime(0));

}


int main(void)
{
	int num;	
	printf("please enter a number\n");
	scanf("%d",&num);	
	if( isPrime(num) )
	{
		printf("%d = %d * 1\n", num, num);	
		return 0;
	}
	printf("%d =", num);
	int i = 2;
	while(1)
	{
		if( isPrime(i) && num%i == 0 )	
		{
			printf(" %d *", i);
			num/=i;		
		}
		if(isPrime(num))
		{
			printf(" %d\n", num); 
			break;
		}
		i++;	
	}
	return 0;
}
