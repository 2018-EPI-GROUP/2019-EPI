#include<stdio.h>
main()
{
	int i,j,t,a[10]={7,8,5,9,2,0,1,6,43,66,};
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		
	}
	printf("从小到大排列为\n");
	for(i=0;i<10;i++)
	printf("%4d",a[i]);
}
