#include <stdio.h>
int main()
{
	int i,j,a,b;
	for(i = 31 ; i < 100 ; i++)
	{
		for(j = 1000 ; i <= 9999 ; j++)
		{
			a = j/100;
			b = j%100;
			if(a/10==a%10&&b/10==b%10&&j==i*i)
			{
				printf("The number is %d",j);
				break;
			}
			
		}
	}
	
	return 0;
}
