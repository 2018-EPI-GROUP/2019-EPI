#include <stdio.h>

int main (void)
{
	int a[5] = {12 , 3 , 45 , 6 , 7};	
	
	int maxnum = a[0];
	int i;
	for (i = 0 ; i < 5 ; i++)
	{
		if (maxnum < a[i])
		{
			maxnum = a[i];
		}
	}
	printf("%d",maxnum);
	return 0;
}
