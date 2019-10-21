#include<stdio.h>
int main()
{
    int *p;
    int b;
    int a[10];
    p=a;
    for(b=0;b<10;b++)
    {
    	a[b]=b+1;
	}
	for(b=0;b<10;b++)
	{
		printf("%d\t",*p);
		p++;
	}
	return 0;
}
