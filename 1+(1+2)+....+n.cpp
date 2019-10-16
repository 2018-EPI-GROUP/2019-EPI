#include<stdio.h>
main()
{
	int i,n,j;
	double t,s;
	s=0;
	printf("ÇëÊäÈënµÄÖµ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		t=0;
	 for(j=1;j<=i;j++)
	 
	 	t+=j;
	 	s+=t;
	 
	}
	printf("%f",s);
	return 0;
 } 
