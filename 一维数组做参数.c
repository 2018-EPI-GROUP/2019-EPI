#include <stdio.h>

void fun (int *p , int nlength)
{
	int i = 0;
	for (i = 0 ; i < nlength ; i++)
	{
		printf ("%d\n",p[i]);
	}
}

int main()
{
	int a[5] = {1,2,3,4,5};
	int a1[7] = {1,2,3,4,5,6,7};
	fun (a,5);
	fun (a1,7);
	
	return 0;
}

