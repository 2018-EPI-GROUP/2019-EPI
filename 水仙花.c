#include<stdio.h>
int mypow(int a,int b);

int mypow(int a,int b)
{
	int i,
	    s=1;
	for(i=0;i<b;i++)
	{
		s*=a;
	}
	return s;
	
}
void main()
{
    int n,
        x,
        y,
        b,
        c,
        d=0,
        i,
        j;
    scanf("%d",&n);
    int a[n];
    b=n;
    x=mypow(10,n)-1;
    y=mypow(10,n-1);
    
    for(i=y;i<=x;i++)
    {
    	b=n;
    	c=i;
    	for(j=0;j<n;j++)
    	{
    		a[j]=c/mypow(10,b);
    		c-=mypow(10,b)*a[j];
    		b--;
		}
		for(j=0;j<n;j++)
		{
			d+=mypow(a[j],n);
		}
		printf("%d\n",d);
		if(i==d)
		{
			printf("%d\n",i);
		}
		
    	
	}
    


}



