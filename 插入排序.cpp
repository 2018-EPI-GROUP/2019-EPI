#include<stdio.h> 
main()
{
	int i,j,t,a[5]={23,56,4,78,43};
	for(i=1;i<5;i++)
	{
		t=a[i];
		j=i-1;
		while(t<a[j])
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=t;
	}
	for(i=0;i<5;i++)
	   printf("%4d",a[i]);
}
