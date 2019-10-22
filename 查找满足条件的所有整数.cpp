#include<stdio.h>
main()
{
	int n,
	    x,
	    i,
	    j,
	    k=0;
	scanf ("%d %d",&n,&x);
	int a[n];
	for (i=0;i<n;i++)
	{
		scanf ("%d",&a[i]);
	}
	for(j=0;j<n;j++)
	{
		if(a[j]==x)
		{
		 printf("%d ",j);
		 k++;
	    }
	    
	}
	if(k==0)
	    printf("Not Found");
	
}
