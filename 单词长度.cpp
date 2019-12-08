#include<stdio.h>
int main()
{
	char a[10000];
	int i,j,k=0;
	printf("ÇëÊäÈë×Ö·û´®\n");
    gets(a); 
	while(a[i]!='.')
	{
		if(a[i]==' ')
		{
			printf("%d ",k);
			k=0;
		}
		else
		{
			k+=1;
		}
		i++;
	}
	printf("%d",k);
	return 0;
 } 
