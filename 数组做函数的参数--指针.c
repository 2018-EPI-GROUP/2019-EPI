#include<stdio.h>
woc(int *book,int n)
{
	int i,j,tem=0;
	for(i=1;i<=5;i++)
		{scanf("%d",&book[i]);}
	for(i=1;i<=4;i++)
		{for(j=1;j<=4;j++)
			{if(book[j]>book[j+1])
				{tem=book[j];
				book[j]=book[j+1];
				book[j+1]=tem; 
				}
			}
		}
	for(i=1;i<=5;i++)
	{printf("%d  ",book[i]);}
}

int main(void)
{
	int a[20],i;
	woc(a,10);
return 0; 
}
