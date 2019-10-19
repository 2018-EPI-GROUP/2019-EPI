#include <stdio.h>
int main()
{
	int n=1,sum=0;
	loop: if(n>100)
	goto end;//跳出循环
	sum+=n;
	n++;
	goto loop;
	end:printf("sum=%d\n",sum);
	return 0;
}
