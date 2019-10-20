#include <stdio.h>

int Findmax (int *p , int n , int *p1)
{
	int i = 0;
	int maxnum = p[0];
	
	for (i = 1 ; i < n ; i++)
	{
		if (maxnum < p[i])
		{
			maxnum = p[i];
		}
	}
	*p1 = maxnum;
	
	return maxnum;
}

int main()
{
	int a[6] = {12,34,32,45,32,21};
	int n = 0;
	printf("%d\n",Findmax(a,6,&n));
//	n = Findmax(a,6);
//	printf("%d\n",n);
	printf("%d\n",n); 
	return 0;
}

