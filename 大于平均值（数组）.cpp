#include<stdio.h>
main()
{
	int n,
	    i,
		j,
		sum,
		x;
    double ave;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
	if(n<1||n>10)
	printf("Invalid");
	else
	{
		
		for(j=0;j<n;j++)
		{
			sum+=a[j];
		}
		ave=(double)sum/n;
		for(x=0;x<n;x++)
		{
			if(x>ave)
			printf("%d ",a[x]);
		}
		
	}
}
