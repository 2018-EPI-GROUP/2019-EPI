#include<stdio.h>
main()
{
	int i,j,t,n;
	int a,b,c=1;
	printf("������һ��С��1000��\n");
	scanf("%d",&n);
	i=n/100;
	j=n%100/10;
	t=n%10;
	while(a<=i)
	{
		if(i==0) break; 
		printf("B");
		a++;
	}
	while(b<=j)
	{
		printf("S");
		b++;
	}
	while(c<=t)
	{
		printf("%d",c);
		c++;
	}
}
