#include<stdio.h>
int a[1000],n; 
void kuaisu(int left,int right);
int main()
{
	int i=1;
	printf("«Î ‰»În÷µ\n");
	scanf("%d",&n);
	while(i<=n)
	{
		scanf("%d",&a[i]);
		i++;
	}
	kuaisu(1,n);
	
	for(i=1;i<=n;i++)
	   printf("%5d",a[i]);
}
void kuaisu(int left,int right)
{
	int i,j,t,k;
	if(left>right)
	return;
	  
	k=a[left];
	i=left;
	j=right;
	while(i!=j)
	{
	  while(a[j]>=k&&j>i)
	     j--;
      while(a[i]<=k&&j>i)
	     i++;
	  if(j>i)
	  {
	 	t=a[i];
	 	a[i]=a[j];
	 	a[j]=t;
	  }
    }
    a[left]=a[i];
    a[i]=k;
    
    kuaisu(left,i-1);
    kuaisu(i+1,right);
    
    return;
}
    
