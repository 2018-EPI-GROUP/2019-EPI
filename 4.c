#include<stdio.h>
int main()
{
int m;
scanf("%d",&m);
switch(m%5)
{
case 1:
case 2:
case 3:
	printf("Fishing in day %d",m);
	break;
default:
	printf("Dtying in day %d",m);
}

return 0;
}
