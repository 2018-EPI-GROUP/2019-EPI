#include <stdio.h>
#include <stdarg.h>

void fun(int a, ...)
{
	va_list ap;
	va_start(ap,a);
	printf("%d\n",va_arg(ap,int));
	printf("%lf\n",va_arg(ap,double));
	printf("%d\n",va_arg(ap,int));
}

int main()
{
	
	fun(3,12,34.,56);
	return 0;
}
