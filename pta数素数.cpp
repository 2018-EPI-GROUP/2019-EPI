#include<stdio.h>
#include<math.h>
#define o 100000
int sushu(int n)
{
	int i;
	for(i=2;i<=sqrt(n);i++)
		if(n%i==0) break;
	if(i>sqrt(n)) return 1;
	else return 0;
 } 
 int main()
 {
 	int i,m,n;
 	int j=1,k=1;
	int a[o]; 
 	printf("«Î ‰»Îm∫Õn\n");
 	scanf("%d%d",&m,&n);
 	for(i=2;i<=o;i++)
 	{
 		if(sushu(i))
 		{
 			a[k]=i;
 			k++;
		 }
	 }
	 for(i=m;i<=n;i++)
	 {
	 	printf("%d",a[i]);
	 	j++;
	 	if(j%10!=0) printf(" ");
	 	else printf("\n");
	 }
	 return 0;
 }
