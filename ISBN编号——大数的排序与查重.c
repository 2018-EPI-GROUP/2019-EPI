#include<stdio.h>
int n;
int p[42];
//int *p=(int*)malloc(sizeof(int)*4294967296);


void quicksort(int left,int right)
{
	int i=left,j,tem,e;  //e为基准数
	//default
	if(left>right)
		return;
	e=p[left];
	for(j=right;j>=left;j--)
		{if(p[j]<e)
			{for(;i<=right;i++)
				{if(i==j)
					{p[1]=p[i];
					p[i]=e;
					break;
					}
				if(p[i]>e)
					{tem=p[i];
					p[i]=p[j];
					p[j]=tem;
					break;
					}
				}
			}
		if(i==j)
			{break;}
		}
	quicksort(left,i-1);
	quicksort(i+1,right);
return;
}

int main(void)
{
	int i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		{scanf("%d",&p[i]);}
	quicksort(1,n);
	for(i=1;i<=n;i++)
	{printf("%d ",p[i]);}
return 0;
}
