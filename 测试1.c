#include<stdio.h>
int main(void)
{
	int a[11],i;
	int *p;
	p=&a; 
	for(i=1;i<=10;i++)
		{a[i]=10*i;
		}
	for(i=1;i<=10;i++)
		{printf("%d  ",a[i]);
		 printf("%d\n",p+i);
		}
return 0;
}
