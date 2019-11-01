#include<stdio.h>
int book[15]={6,1,2,7,9,3,4,5,10,8},p,i=0,j,tem;

void check(int a[])
{
	int m ;
	for(m = 0 ; m < 10 ; m++ )
		{printf("%d ", a[m]);}
	printf("\n");
	return;
}

int quicksort(int begin ,int end )
{
	for(j=end;j>=begin;j--)
		{if(book[j]<p)
			{for(;i<=end;i++)
				{if(i==j)
					{check(book);
					book[0]=book[i];
					check(book);
					book[i]=p;
					check(book);
					break;
					}
				if(book[i]>p)
					{check(book);
					tem=book[i];
					check(book);
					book[i]=book[j];
					check(book);
					book[j]=tem;
					check(book);
					break;
					}
				}
			}
		if(i==j)
			{break;}
		}
	return 0;
}

int main(void)
{
	p=book[0];
	quicksort(0,9); 
	for(i=0;i<10;i++)
	{printf("%d ",book[i]);}
return 0;
}
