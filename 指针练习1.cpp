#include <stdio.h>
void bubble (int a[ ], int n);
int main(void)
{    
  int n, a[10];
	int i;
	scanf("%d", &n);
	for (i=0; i<n;i++)
		scanf("%d",&a[i]);
	bubble(a,n);
	for (i=0; i<n; i++)
		printf("%d ",a[i]);
  printf("\n");
	return 0;
}

void bubble(int a[ ],int n)
{
	int i,b,
	    j;
	for(b=0;b<n;b++)
	for(i=0;i<n;i++)
	{
		if((i+1)==n)
		break;
		 
		if(a[i]>a[i+1])
		{
			j=a[i+1];
			a[i+1]=a[i];
			a[i]=j;
			
			
		}
	}
 } 
