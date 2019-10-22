#include<stdio.h>
main()
{
	int N,
	    i,
		j;
	scanf("%d",&N);
	int a[N]={1,1};
	if(N<1||N>46)
	printf("Invalid");
	else
	{
		for(i=0;i<N;i++)
		{
		a[i+2]=a[i]+a[i+1];	
		}
		
		
		  for(j=1;j<=N;j++)
		 {
			printf("%11d",a[j-1]);
			if(j%5==0)
			printf("\n");
		 }	
		
		
		
		
		
	}
}
