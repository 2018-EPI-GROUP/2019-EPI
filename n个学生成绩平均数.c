#include <stdio.h>

int main() 
{
	int n,num=0;
	double b;
	int a[n];
	//printf("\n");
	int i;
	scanf("%d",&n);

	for (i=0; i<n-1; i++) 
	{
		scanf("%d ",&a[i]);
		if(a[i]<60) num++;
	}

	for (i=0; i<n-1; i++) 
	{
		b=b+a[i];
	}
	b=b/n;
	if(n!=0)printf("average = %.2lf\nncount = %d",b,num);
	else printf("average = 0\ncount = %d",b,num);
}
