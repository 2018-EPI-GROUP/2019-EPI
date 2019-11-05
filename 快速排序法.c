#include<stdio.h>
void Act(int l,int r,int array[])
{
	int i,j;
	int m,t;
	i=l;
	j=r;
	m=array[(l+r)/2];
	do
	{
		while((array[i]<m)&&(i<r))
		    i++;
		while((array[j]>m)&&(j>l))
		    j--;
		if(i<=j)
		{
			t=array[i];
			array[i]=array[j];
			array[j]=t;
			i++;
			j--;
		}
	}while(i<=j);
	if(l<j)
	    Act(l,j,array);
	if(r>i)
	    Act(i,r,array);
} 
int main()
{
	int i;
	int a[10];
	printf("为数组元素赋值：\n");
	for(i=0;i<10;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	Act(0,9,a);
	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
		if(i==4)
		    printf("\n");
	}
	return 0;
}
