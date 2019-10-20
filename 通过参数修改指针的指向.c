#include <stdio.h>

void fun1(int* *p)
{
	printf("p = %p\n",*p);
	*p = NULL;
	printf("p = %p\n",*p);

}
int main()
{
	int a = 12;
	int *p1 = &a;
	printf("%p\n",p1);
	fun1(&p1);
	printf("%p\n",p1);
		//printf("%d\n",*p1);
	return 0;
}

