#include <stdio.h>
int fib(int n)
{
	if(n>2) return fib(n-1)+fib(n-2);
	else return 1;
}
int main()
{
	int a;
	for(a=1;a<=20;a++)
	printf(" %d",fib(a));
	printf("\n");
	return 0;
