#include<stdio.h>
#define N 10
main()
{
	int i,j,t,a[N]={1,2,3,4,5,6,7,8,9,10};
	printf("原数组为：\n");
	for(i=0;i<N;i++)
	{
		printf("%4d",a[i]);
	}
	for(i=0;i<N/2;i++)
	{	
		    j=9-i; 
			t=a[i];
		    a[i]=a[j];
		    a[j]=t;
		    
	} 
		printf("镜像反转后为：\n");
		for(i=0;i<N;i++)
		printf("%4d",a[i]);
}
