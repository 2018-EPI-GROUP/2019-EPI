#include<stdio.h>
int main()
{
	int f1=1,f2=1;
	int i;
	for(i=1;i<=20;i++)
	{
		printf("%12d\n%12d",f1,f2);
		if(i%1==0) printf("\n");
		f1=f1+f2;
		f2=f2+f1;
	}
	return 0;
}
