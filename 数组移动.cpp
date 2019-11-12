#include<stdio.h>
int a[100];
main()
{
	int i,j,n,t,m,b;
	printf("«Î ‰»În∫Õt\n");
	scanf("%d%d",&n,&t);
	i=1; 
	while(i<=n) 
	{
		scanf("%d",&a[i]);
		i++;
	}
	for(j=1;j<=t;j++)
	{
		m=a[n];
		for(b=n;b>=1;b--)
		{
			a[b]=a[b-1];
			if(b==1)
			{
				a[b]=m;
			}
		}
	 } 
	 for(i=1;i<=n;i++)
	    printf("%d",a[i]);
 } 
