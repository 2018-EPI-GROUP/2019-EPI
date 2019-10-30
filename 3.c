#include <time.h>
#include <stdio.h>
int main() 
{
	int a[3] = {1,2,3};
	int *p;
	p = &a[2];
	printf("%p,%p,%p\n",a,&a[1],a-1);
	printf("%p,%p,%p",p,p-1,&a[1]);
}
