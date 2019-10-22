#include<stdio.h>
main()
{
	int n,
	    i,
	    j,
	    min,
	    t;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	min=a[0]; 
	for(j=1;j<n;j++)
	{
		if(a[j]<min)
		{
			min=a[j];
			t=j;
			
		}
	
	}
	printf("%d %d",min,t);
}
