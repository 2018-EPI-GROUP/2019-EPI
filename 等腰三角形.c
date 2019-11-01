#include<stdio.h>
int main(void)
{
int i,j,n; 
scanf("%d",&n); 
for(i=1;i<n;i++) {
for(j=1;j<=i-1+n;j++) 
if(j==n-i+1||j==n+i-1) 
printf("*"); 
else printf(" "); 
printf("\n");}

for(i=1;i<=2*n-1;i++) 
printf("*");
} 
