
#include <stdio.h>
void swap(int *a1,int *b1);

int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a>b) swap(&a,&b);
	if(b>c) swap(&b,&c);
	if(a>b) swap(&a,&b);
	printf("%d->%d->%d",a,b,c);
	return 0; 
}

void swap(int *a1,int *b1)
{
	int t;
	t = *a1;
	*a1 = *b1;
	*b1 = t;
}
