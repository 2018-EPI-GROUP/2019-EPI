#include<stdio.h>
int main()
{
	int n,b[1000]={0};
	int j=1;
	scanf("%d",&n);
	for(int i=1;i<1000;i++)
		if(n==(i%10+i/10%10+i/100))
			{
				b[j]=i;
				j++;
			}
	for(int i=1;i<j;i++)
	{
		printf("%6d",b[i]);
		if(i%6==0)
		printf("\n");
	}
	return 0;
}
