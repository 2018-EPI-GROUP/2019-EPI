#include <stdio.h>
int main()
{
	int n=1,sum=0;
	loop: sum+=n;
	++n;
	if(n<=100)
	goto loop;
	printf("sum=%d",sum);
	return 0;
}
