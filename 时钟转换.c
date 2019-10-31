#include <stdio.h>
#define MOOO 60
int main (void)
{
	int minute,hours,mins;
	printf("please enter the minutes to convets\n");
	scanf("%d",&minute);
	while(minute>0)
	{
	hours=minute/MOOO;
	mins=minute%MOOO;
	printf("%dminutes=%dhours,mins=%dminute\n",minute,hours,mins);
	scanf("%d",&minute);
	}
	return 0;
}
	
