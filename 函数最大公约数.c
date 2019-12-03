#include<stdio.h>
#include<math.h>
int maax(int a,int b);
int miin(int a,int b);
int main()
{
	int n,x,max,min;
	scanf("%d,%d",&n,&x);
	max=maax(n,x);
	min=miin(n,x);
	printf("%d,%d",max,min);
	return 0;
}
int maax(int a,int b)
{
	int i,x;
	for(i=1;i<abs(b)&&i<abs(a);i++)
	{
		if(a%i==0&&b%i==0)
		x=i;
	}
	return x;
	
}
int miin(int a,int b)
{
	int i,x,t;
	if(abs(a)>abs(b))
	t=a;
	else 
	t=b;
	if(a<0||b<0)
	{
		if(t>0)
		t=-t;
		for(i=t;;i--)
		{
			if(i%a==0&&i%b==0)
			{
				x=i;
				break;
			}
			
		}
	}
	else
	{
		for(i=b;;i++)
		{
			if(i%a==0&&i%b==0)
			{
				x=i;
				break;
			}
			
		}
	}
	
	return x;
}
