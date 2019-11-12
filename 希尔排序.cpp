#include<stdio.h>
main()
{
	int i,j,t,a[10]={9,1,2,5,7,4,8,6,3,5};
	int d=5;
	while(d>=1)
	{
		for(i=d;i<=10;i++)
		{
			t=a[i];
			j=i-d;
			while(a[j]>t)
			{
				a[j+d]=a[j];
				j=j-d;
			}
			a[j+d]=t;
		}
		d=d/2; 
	}
	for(i=0;i<10;i++)
	printf("%4d",a[i]);
}
