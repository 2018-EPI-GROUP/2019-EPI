#include <stdio.h>
#include <stdlib.h>
int main ()
{
	long double num=3.1569E7;
	long double tie;
	int mmm;
	printf ("please enter your age:\n");
	scanf ("%d",&mmm);
	tie=num*mmm;
	printf ("your age time is %le",tie);
	return 0;
}
