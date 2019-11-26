#include<stdio.h>
int main()
{
int n[5][5]={
    {2},
	{3,5},
    {4,2,7},
    {6,9,3,5},
	{6,2,8,2,4}
            };
int i,r,num;
int max[5][5];
for(i=0;i<5;i++)
{
	max[4][i]=n[4][i];
}
for(i=3;i>-1;i--)
    {
    for(r=i;r>-1;r--)
        {
    	int a,b;
    	a=n[i][r]+max[i+1][r+1];
    	b=n[i][r]+max[i+1][r];
    	if(a>b)
    	max[i][r]=a;
    	else
    	max[i][r]=b;
	    }
    }
    num=max[0][0];
    printf("%d",num);
    return 0;
}
