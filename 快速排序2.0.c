#include<stdio.h>
int a[200],n;

void quicksort(int left,int right)
{
	int i=left,j,tem,p;  //p为基准数
	//default
	if(left>right)
		return;
	p=a[left];
	for(j=right;j>=left;j--)
		{if(a[j]<p)
			{for(;i<=right;i++)
				{if(i==j)
					{a[1]=a[i];
					a[i]=p;
					break;
					}
				if(a[i]>p)
					{tem=a[i];
					a[i]=a[j];
					a[j]=tem;
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
		{scanf("%d",&a[i]);}
	quicksort(1,n);
	for(i=1;i<=n;i++)
	{printf("%d ",a[i]);}
return 0;
}
