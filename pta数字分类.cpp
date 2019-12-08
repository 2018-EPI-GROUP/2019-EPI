#include<stdio.h>
#include<math.h>
int n;
int A1(int a[])
{
	int sum,i; 
	for(i=1;i<=n;i++)
	{
		if(a[i]%5==0&&a[i]%2==0)
		  sum+=a[i];
	}
	if(sum==0)
	  sum=n;
	return sum;
}
int A2(int a[])
{
	int sum,i;
	for(i=1;i<=n;i++)
	{
		if(a[i]%5==1)
		{
			if(i%2==0)
			  sum-=a[i];
			else
			  sum+=a[i];
		}
	}
	if(sum==0)
    sum=n;
	return sum;
}
int A3(int a[])
{
	int k=0,i;
	for(i=1;i<=n;i++)
	{
		if(a[i]%5==2)
		  k+=1;
	}
	if(k==0)
	k=n;
	return k;
}
int A4(int a[])
{
	int i,aver,sum,k;
	for(i=1;i<=n;i++)
	{
		if(a[i]%5==3)
		{
			sum+=a[i];
			k++;
		}
	}
	aver=sum/k;
	if(aver==0)
	aver=n;
	return aver;
}
main()
{
	int i=1,a[1000];
	printf("ÇëÊäÈë¸öÊý\n");
	scanf("%d",&n);
	while(i<=n)
	{
		scanf("%d",&a[i]);
		i++;
	}
	printf("%4d%4d%4d",A1(a),A2(a),A3(a));
}
