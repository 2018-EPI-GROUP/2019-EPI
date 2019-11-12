#include<stdio.h>
void sort(int a[],int len)
{
	int step;
	for(step=len/2;step>0;step/=2)
	{
		int i;
		for(i=step;i<len;i++)
		{
			int k;
			for(k=i-step;k>=0&&a[k]>a[k+step];k-=step)
			{
				int t=a[k];
				a[k]=a[k+step];
				a[k+step]=t;
			}
		}
	}
}
int main()
{
	int a[11],i;
	for(i=0;i<11;i++)
	{
	    printf("a[%d]=",i);
	    scanf("%d",&a[i]);
    }
    sort(a,11);
    for(i=0;i<11;i++)
    {
    	printf("%d\t",a[i]);
	}
	return 0;
}
