#include<stdio.h>

void swap(int *p1,int *p2)
{
	int tem=*p1;
	*p1=*p2;
	*p2=tem;
return;
}

int main(void)
{
	int m,n;
	scanf("%d,%d",&m,&n);
	int *fp1,*fp2;
	fp1=&m;
	fp2=&n;
	swap(fp1,fp2);
	printf("%d,%d",m,n);
return 0;
}
