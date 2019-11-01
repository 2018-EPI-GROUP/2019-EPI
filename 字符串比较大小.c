#include<stdio.h>
#include<string.h>
void main()
{
    int n,
	    i;
	char ch;
	scanf("%d",&n);
	
	char a[n]; 
    for(i=0;i<n;i++)
    {
    	scanf("%s",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
	   if (strcmp(a[i],a[i+1])>0)
	   ch=a[i+1];
	   else if(strcmp(a[i],a[i+1])<0)
	   ch=a[i];
	   else
	   ch=a[i];
	}
    printf("Min is: %c",ch);






} 
