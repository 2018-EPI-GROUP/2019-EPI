#include<stdio.h>
show(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	   printf("%4d",a[i]);
	   printf("\n");
}
swap(int *p,int *q)
{
	int t;
	t=*p;
	*p=*q;
	*q=t;
}
maopao(int a[],int n)
{
	int left,right,flag,i;
	left=0;
	right=n-1;
	while(left<right)
	{
		flag=0;
		for(i=left;i<right;i++)
		{
			if(a[i]>a[i+1])
			{
		      swap(&a[i],&a[i+1]);
			  flag=1;
			}
		}
		if(!flag) break;
		right--;
		for(i=right;i>left;i--)
		{
			if(a[i]<a[i-1])
			{
				swap(&a[i],&a[i-1]);
				flag=1;
			}
		}
		left++;
	}
}
main()
{
	int a[10]={12,34,66,22,11,9,56,42,20,33},n=10;
	show(a,10);
	maopao(a,10);
	show(a,10);
}
