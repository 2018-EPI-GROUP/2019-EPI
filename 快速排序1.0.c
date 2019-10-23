#include<stdio.h>
int main(void)
{
	int book[15]={6,1,2,7,9,3,4,5,10,8},p,i=0,j,tem;
	p=book[0];
	for(j=9;j>=0;j--)
		{if(book[j]<p)
			{for(;i<=9;i++)
				{if(i==j)
					{book[0]=book[i];
					book[i]=p;
					break;
					}
				if(book[i]>p)
					{tem=book[i];
					book[i]=book[j];
					book[j]=tem;
					break;
					}
				}
			}
		if(i==j)
			{break;}
		}
	for(i=0;i<=9;i++)
	{printf("%d ",book[i]);}
return 0;
}
