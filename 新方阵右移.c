#include<stdio.h>
#include<math.h>
int main()
{
	int n,
	    b,
		i;
		
	scanf("%d,%d",&n,&b);
    int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=(n-b);i<n;i++)
	{
		printf("%d",a[i]);
		
	}
	for(i=0;i<(n-b);i++)
	{
		printf("%d",a[i]);
	}
    return 0; 
 } 
