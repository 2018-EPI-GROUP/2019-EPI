#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,i,j;
	for(i=100;i<501;i++)
	{	
		j=i;
		a=j%10;
		b=j/10%10;
		c=j/100;
		if(j==pow(a,3)+pow(b,3)+pow(c,3))
		printf("%d\n",j);
	}
}

