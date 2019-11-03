#include<stdio.h>
int main(void)
{
	int n, i ,j;
	scanf("%d",&n);
	int book[n+1],tem=0;
	for(i=1;i<=n;i++)
		scanf("%d",&book[i]);
	for(i=1;i<=n-1;i++)
		{for(j=1;j<=n-1;j++)
			{if(book[j]>book[j+1])
				{tem=book[j];
				book[j]=book[j+1];
				book[j+1]=tem; 
				}
			}
		}
	for(i=1;i<=n;i++)
		printf("%d  ",book[i]);
	return 0;
}
