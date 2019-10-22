#include <stdio.h>

int fun(int n)
{
	if(n == 1)
	{
		return 1;
	}
	else if(n == 2)
	{
		return 1;
	}
	else
	{
		return fun(n-1) + fun(n-2);
	}
	
}

int main()
{
	printf("%d",fun(5));
	return 0;
}
