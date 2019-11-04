#include<stdio.h>
int main(void)
{
	int n ;
	char *m[13]={
	"January",
	"February",
	"March",
	"April",
	"May",
	"June",
	"July",
	"Augest",
	"September",
	"October",
	"November",
	"December"};
	scanf("%d",&n);
	printf("%s",m[n-1]);
	return 0;
}
