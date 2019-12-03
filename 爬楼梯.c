#include <stdio.h> 
int f(int n)
{
	if (n < 0) return 0;
	if (n == 0 || n == 1) return 1;
	if (n == 2) return 2;

	return f(n - 1) + f(n - 2) + f(n - 3);
}

int main()
{
	int n;
	scanf("%d", &n);
	int z = f(n);
	printf("%d\n", z);
	return 0;
}

