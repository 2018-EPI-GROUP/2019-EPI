#include<stdio.h>
int main()
{
	int  i,
	    j,
        b[10],
	    x=0,
	    t;
	
	int a[10];
	for(i=0;i<10;i++)
	{
		scanf("%d,",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		for(j=0;j<9;j++)
		{
			if(a[j]>a[j+1])
			{ 
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;
			} 
			
		}
	}
	for(i=0;i<9;i++)
	{
		for(j=2;j<a[i];j++)
		{
           
		   if(a[i]%j==0)
		   break;
		   if(a[i]%j!=0&&j==(a[i]-1)&&a[i]>=2)
		   {
		      b[x]=a[i];
		      
		      x++;
		      
		   }	
		
		}
     
	}
	if(x!=0)
	for(i=0;i<=x;i++)
	{
		printf("%d",b[i]);
		if(i!=x)
		printf(",");
	}
		if(x==0)
     	printf("Not found!");
	
 }
